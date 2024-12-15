# C 语言中 struct/union/enum 的定义与声明的词法分析与语法分析

## 						—— CS2205 - Programming Language 编程任务

### 一、小组信息

- 组长：王许诺
- 组员：范昊翀、刘家宁、吴雨翔、周航

### 二、编译与运行

在 Linux 环境下，在 `struct_union_enum` 文件夹下，输入

```
make
```

进行编译，然后输入

```
./main TESTFILE
```

对 `TESTFILE` 文件里的代码进行词法分析与语法分析。

我们额外提供了一个测试脚本 `driver.py` 对 `./data` 下的所有 `*.c` 文件进行测试，并输出语法分析的结果，你可以在 `struct_union_enum` 文件夹下输入

```
python driver.py
```

来执行该测试脚本。

### 三、项目内容

该项目主要通过 flex 与 bison 实现了 C 语言中 struct/union/enum 的定义与声明的词法分析与语法分析，基于 typedef 的类型定义，以及变量的定义，且仅考虑一条语句定义一个变量的情形。

具体而言，它的语法如下：

```
STRUCT_DEFINITION ::= struct STRUCT_NAME { FIELD_LIST } ;
STRUCT_DECLARATION ::= struct STRUCT_NAME ;
UNION_DEFINITION ::= union UNION_NAME { FIELD_LIST } ;
UNION_DECLARATION ::= union UNION_NAME ;
ENUM_DEFINITION ::= enum ENUM_NAME { ENUM_ELE_LIST } ;
ENUM_DECLARATION ::= enum ENUM_NAME ;
TYPE_DEFINITION ::= typedef LEFT_TYPE NAMED_RIGHT_TYPE_EXPR ;
VAR_DEFINITION ::= LEFT_TYPE NAMED_RIGHT_TYPE_EXPR ;
```

其中，`FIELD_LIST` 可以为空，`ENUM_ELE_LIST` 不可以为空，它们的语法如下：

```
FIELD ::= LEFT_TYPE NAMED_RIGHT_TYPE_EXPR ;
FIELD_LIST ::= FIELD FIELD ... FIELD
ENUM_ELE_LIST ::= ENUM_ELE, ENUM_ELE, ... , ENUM_ELE
```

其中，`STRUCT_NAME`、`UNION_NAME`、`ENUM_NAME`、`ENUM_ELE` 以及后文中的 `IDENT` 都表示以字母或下划线开头且仅包含字母数码与下划线的字符串（我们认为这些字符串不包含 `int`、`char`、`struct` 等关键字）。

关于 `LEFT_TYPE` 与 `NAMED_RIGHT_TYPE_EXPR`，它们的相关语法如下：

```
LEFT_TYPE ::= struct STRUCT_NAME { FIELD_LIST }
 | struct { FIELD_LIST }
 | struct STRUCT_NAME
 | union UNION_NAME { FIELD_LIST }
 | union { FIELD_LIST }
 | union UNION_NAME
 | enum ENUM_NAME { ENUM_ELE_LIST }
 | enum { ENUM_ELE_LIST }
 | enum ENUM_NAME
 | int | char | IDENT
NAMED_RIGHT_TYPE_EXPR ::= IDENT
 | * NAMED_RIGHT_TYPE_EXPR
 | NAMED_RIGHT_TYPE_EXPR [ NAT ]
 | NAMED_RIGHT_TYPE_EXPR ( ARGUMENT_TYPE_LIST )
ANNON_RIGHT_TYPE_EXPR ::= EMPTY
 | * ANNON_RIGHT_TYPE_EXPR
 | ANNON_RIGHT_TYPE_EXPR [ NAT ]
 | ANNON_RIGHT_TYPE_EXPR ( ARGUMENT_TYPE_LIST )
ARGUMENT_TYPE ::= LEFT_TYPE ANNON_RIGHT_TYPE_EXPR
ARGUMENT_TYPE_LIST ::= ARGUMENT_TYPE, ..., ARGUMENT_TYPE
```

此处规定 `NAMED_RIGHT_TYPE_EXPR` 与 `ANNON_RIGHT_TYPE_EXPR` 向后结合（数组与函数）的优先级高于向前结合（指针）。

### 四、实现思路

我们首先将各个非终结符与相应的正则表达式录入 `lang.l`，完成词法分析。此处我们将 `int`、`char`、`struct` 等关键字置于变量名的识别前，即可保证正确识别。

语法分析方面，我们首先按照语法引入了相应的非终结符，然后额外引入了  `NT_WHOLE`、`NT_GLOBAL_ITEM_LIST` 与 `NT_GLOBAL_ITEM`，分别表示整个程序、若干条语句、单条语句。我们规定整个程序必须包含至少一条语句。

对于 `FIELD_LIST`，由于它是 $0$ 或若干个 `FIELD` 的简单拼接，所以我们直接使用 `%empty` 作为终结递归的判断条件。

对于 `ENUM_ELE_LIST`，由于它是若干个 `ENUM_ELE` 与中间的逗号（首尾无逗号）的拼接，所以我们使用以下两条规则表示其语法：

```
NT_ENUM_ELE_LIST ::= NT_ENUM_ELE TM_COMMA NT_ENUM_ELE_LIST
 | NT_ENUM_ELE
```

对于 `ARGUMENT_TYPE_LIST`，我们将空的 `ARGUMENT_TYPE_LIST` 在上一层直接展开（可以参考下文），于是只需考虑非空的 `ARGUMENT_TPYE_LIST`。如果直接如 `FILED_LIST` 一般处理，那么会导致最后一个 `LEFT_TYPE NT_ANNON_RIGHT_TYPE_EXPR` 后出现一个逗号，所以我们选择将空规则作为特殊情况在上一层直接展开。由于 `ANNON_RIGHT_TYPE_EXPR` 可能为空，且会影响到后续的判断，所以我们将空的 `ANNON_RIGHT_TYPE_EXPR` 额外作为一条规则，见下：

```
NT_ARGUMENT_TYPE_LIST ::= NT_LEFT_TYPE NT_ANNON_RIGHT_TYPE_EXPR TM_COMMA NT_ARGUMENT_TYPE_LIST
 | NT_LEFT_TYPE TM_COMMA NT_ARGUMENT_TYPE_LIST
 | NT_LEFT_TYPE NT_ANNON_RIGHT_TYPE_EXPR
 | NT_LEFT_TYPE
```

本项目的一大难点在于处理改变优先级的括号，即 `NAMED_RIGHT_TYPE_EXPR` 与 `ANNON_RIGHT_TYPE_EXPR` 部分的优先级处理。这一部分相当于有一个变量名 `NAME`，它每次可以向后结合一个 `[ NAT ]` 或 `( ARGUMENT_TYPE_LIST )`，或者向前结合一个 `*`，我们优先向后结合，但可以通过 `()` 改变优先级。所以，对于一对合法的、改变括号优先级的括号，它应当包含 `NAME`；而 `ARGUMENT_TYPE_LIST` 两端的括号则必然不包含 `NAME`。我们首先在 `lang.y` 中设置优先级，规定 `[` 与 `(` 的优先级高于 `*`。

对于 `NAMED_RIGHT_TYPE_EXPR`，它的 `NAME` 非空，所以可以轻松识别，进而可以轻松识别函数参数列表的括号和改变优先级的括号，因此只需要简单地添加一条规则 `NAMED_RIGHT_TYPE_EXPR <- ( NAMED_RIGHT_TYPE_EXPR )`。

对于 `ANNON_RIGHT_TYPE_EXPR`，它的 `NAME` 为空，这导致我们无法像处理 `NAMED_RIGHT_TYPE_EXPR` 那样简单地添加一条规则，否则会导致语法冲突。考虑这么一种情况：`int ( ) ( )`，如果不做特殊的处理，那么它有两种解释方法：`int NAME () ()` 或 `int ( NAME ) ( )`。

我们注意到这里引发冲突的本质原因是空 `NAME` 作为括号内部唯一的元素，与空的函数参数列表产生了冲突，因此规定改变优先级的括号不能加在空 `NAME` 两端，这样我们就可以识别括号到底是改变优先级还是作为函数的参数列表。然而，即使注意到这一点，如果没有合理的实现方案，仍然会导致语法冲突。

经过曹老师指点迷津，我们意识到此处要尽可能避免 `%empty` 的出现。在一些试错后，我们决定在 `NT_ARGUMENT_TYPE_LIST` 这一层次就将 `%empty` 展开，这样一来只需要考虑非空的 `NT_ANNON_RIGHT_TYPE_EXPR`。我们直接将单个 `*`、`[ NAT ]`、`( )` 与 `( ARGUMENT_TYPE_LIST )` （注意此处后两者都表示函数，一个表示空的参数列表，一个表示非空的参数列表，这样处理的原因见上文）作为递归的终结条件，也就是说直接将空 `NAME` 与它们结合。这么处理不会出现语法冲突的原因是，空 `NAME` 只存在唯一一种合法的结合方法。解决了这个难题后，其余部分只需如 `NAMED_RIGHT_TYPE_EXPR` 一般处理即可。

确定了具体的上下文无关语法后，我们只需按照 `lang.h` 中的指引，将语法对应的 C 语言表达式填入即可。