/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "lang.y"

	// this part is copied to the beginning of the parser
	#include <stdio.h>
	#include "lang.h"
  #include "lib.h"
	#include "lexer.h"
	void yyerror(char *);
	int yylex(void);
  struct glob_item_list * root;

#line 82 "lang.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TM_NAT = 258,                  /* TM_NAT  */
    TM_IDENT = 259,                /* TM_IDENT  */
    TM_INT = 260,                  /* TM_INT  */
    TM_CHAR = 261,                 /* TM_CHAR  */
    TM_LEFT_CURLY = 262,           /* TM_LEFT_CURLY  */
    TM_RIGHT_CURLY = 263,          /* TM_RIGHT_CURLY  */
    TM_LEFT_SQUARE = 264,          /* TM_LEFT_SQUARE  */
    TM_RIGHT_SQUARE = 265,         /* TM_RIGHT_SQUARE  */
    TM_LEFT_PAREN = 266,           /* TM_LEFT_PAREN  */
    TM_RIGHT_PAREN = 267,          /* TM_RIGHT_PAREN  */
    TM_DEREF = 268,                /* TM_DEREF  */
    TM_SEMICOL = 269,              /* TM_SEMICOL  */
    TM_COMMA = 270,                /* TM_COMMA  */
    TM_STRUCT = 271,               /* TM_STRUCT  */
    TM_UNION = 272,                /* TM_UNION  */
    TM_ENUM = 273,                 /* TM_ENUM  */
    TM_TYPEDEF = 274               /* TM_TYPEDEF  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "lang.y"

unsigned int n;
char * id;
struct glob_item_list * gil;
struct glob_item * gi;
struct var_decl_expr * vde;
struct left_type * lt;
struct enum_ele_list * eel;
struct type_list * tl;
void * none;

#line 160 "lang.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TM_NAT = 3,                     /* TM_NAT  */
  YYSYMBOL_TM_IDENT = 4,                   /* TM_IDENT  */
  YYSYMBOL_TM_INT = 5,                     /* TM_INT  */
  YYSYMBOL_TM_CHAR = 6,                    /* TM_CHAR  */
  YYSYMBOL_TM_LEFT_CURLY = 7,              /* TM_LEFT_CURLY  */
  YYSYMBOL_TM_RIGHT_CURLY = 8,             /* TM_RIGHT_CURLY  */
  YYSYMBOL_TM_LEFT_SQUARE = 9,             /* TM_LEFT_SQUARE  */
  YYSYMBOL_TM_RIGHT_SQUARE = 10,           /* TM_RIGHT_SQUARE  */
  YYSYMBOL_TM_LEFT_PAREN = 11,             /* TM_LEFT_PAREN  */
  YYSYMBOL_TM_RIGHT_PAREN = 12,            /* TM_RIGHT_PAREN  */
  YYSYMBOL_TM_DEREF = 13,                  /* TM_DEREF  */
  YYSYMBOL_TM_SEMICOL = 14,                /* TM_SEMICOL  */
  YYSYMBOL_TM_COMMA = 15,                  /* TM_COMMA  */
  YYSYMBOL_TM_STRUCT = 16,                 /* TM_STRUCT  */
  YYSYMBOL_TM_UNION = 17,                  /* TM_UNION  */
  YYSYMBOL_TM_ENUM = 18,                   /* TM_ENUM  */
  YYSYMBOL_TM_TYPEDEF = 19,                /* TM_TYPEDEF  */
  YYSYMBOL_YYACCEPT = 20,                  /* $accept  */
  YYSYMBOL_NT_WHOLE = 21,                  /* NT_WHOLE  */
  YYSYMBOL_NT_GLOB_ITEM_LIST = 22,         /* NT_GLOB_ITEM_LIST  */
  YYSYMBOL_NT_GLOB_ITEM = 23,              /* NT_GLOB_ITEM  */
  YYSYMBOL_NT_FIELD_LIST = 24,             /* NT_FIELD_LIST  */
  YYSYMBOL_NT_ARGUMENT_TYPE_LIST = 25,     /* NT_ARGUMENT_TYPE_LIST  */
  YYSYMBOL_NT_ENUM_ELE_LIST = 26,          /* NT_ENUM_ELE_LIST  */
  YYSYMBOL_NT_LEFT_TYPE = 27,              /* NT_LEFT_TYPE  */
  YYSYMBOL_NT_NAME_RIGHT_TYPE_EXPR = 28,   /* NT_NAME_RIGHT_TYPE_EXPR  */
  YYSYMBOL_NT_ANNON_RIGHT_TYPE_EXPR = 29,  /* NT_ANNON_RIGHT_TYPE_EXPR  */
  YYSYMBOL_NT_ANNON_RIGHT_TYPE_EXPR_2 = 30 /* NT_ANNON_RIGHT_TYPE_EXPR_2  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   142

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  20
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  11
/* YYNRULES -- Number of rules.  */
#define YYNRULES  46
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  110

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   274


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    55,    55,    62,    66,    72,    76,    80,    84,    88,
      92,    96,   100,   106,   111,   116,   120,   126,   130,   136,
     140,   144,   148,   152,   156,   160,   164,   168,   172,   176,
     180,   187,   191,   195,   199,   203,   207,   213,   217,   223,
     227,   231,   235,   239,   243,   247,   252
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TM_NAT", "TM_IDENT",
  "TM_INT", "TM_CHAR", "TM_LEFT_CURLY", "TM_RIGHT_CURLY", "TM_LEFT_SQUARE",
  "TM_RIGHT_SQUARE", "TM_LEFT_PAREN", "TM_RIGHT_PAREN", "TM_DEREF",
  "TM_SEMICOL", "TM_COMMA", "TM_STRUCT", "TM_UNION", "TM_ENUM",
  "TM_TYPEDEF", "$accept", "NT_WHOLE", "NT_GLOB_ITEM_LIST", "NT_GLOB_ITEM",
  "NT_FIELD_LIST", "NT_ARGUMENT_TYPE_LIST", "NT_ENUM_ELE_LIST",
  "NT_LEFT_TYPE", "NT_NAME_RIGHT_TYPE_EXPR", "NT_ANNON_RIGHT_TYPE_EXPR",
  "NT_ANNON_RIGHT_TYPE_EXPR_2", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-68)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,   -68,   -68,   -68,    -1,    19,    74,    67,    33,   -68,
      11,     9,    -3,    67,    -2,    67,    17,    37,    97,    98,
      99,     9,   -68,   -68,   -68,     9,     9,    65,    67,   -68,
      39,     9,    67,   -68,    43,    37,   -68,    44,    78,    75,
      80,    85,    66,    51,    23,   112,    32,   -68,   109,   -68,
      79,   110,   -68,   111,    37,   -68,    67,    67,    37,   -68,
     -68,   113,   -68,   108,    96,    94,    67,   107,   114,   -68,
     116,   117,   118,   -68,   -68,   100,   119,   120,   101,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   119,   105,   101,    67,
     124,    49,    87,   126,    52,   -68,   121,   -68,   122,   -68,
     123,   125,   127,   -68,   -68,   128,   -68,   129,   -68,   -68
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    30,    28,    29,     0,     0,     0,     0,     0,     2,
       4,     0,    21,    14,    24,    14,    27,     0,     0,     0,
       0,     0,     1,     3,    31,     0,     0,     0,    14,     6,
       0,     0,    14,     8,     0,     0,    10,    18,     0,    21,
      24,    27,     0,     0,    33,     0,     0,    12,     0,    20,
       0,     0,    23,     0,     0,    26,    14,    14,     0,    11,
      32,     0,    36,     0,    46,    19,    14,    22,    25,    17,
       0,     0,     0,    34,    35,    46,    46,    16,    38,     5,
      13,     7,     9,    19,    22,    25,    46,     0,    37,     0,
       0,     0,     0,     0,     0,    15,     0,    42,     0,    39,
       0,    42,     0,    40,    44,    40,    43,    44,    41,    45
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -68,   -68,   132,   -68,   -14,     6,   -33,     0,    14,   -68,
     -67
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     8,     9,    10,    30,    63,    38,    31,    27,    77,
      78
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      11,    34,    53,    12,    28,    32,    13,    21,    87,    88,
      11,    29,    33,    24,    48,     1,     2,     3,    51,    92,
      25,    69,    26,    14,    35,    72,    15,     4,     5,     6,
       7,    36,    45,    22,    46,    42,     1,     2,     3,    43,
      44,    37,    70,    71,    62,    50,    64,    49,    18,    19,
      20,    52,    80,     1,     2,     3,     1,     2,     3,    54,
      45,    97,    46,    60,   101,    18,    19,    20,    18,    19,
      20,     1,     2,     3,    45,    45,    46,    46,    16,    47,
      59,    17,    56,    18,    19,    20,    55,    57,    45,    64,
      46,    64,    58,    66,    64,    95,    90,    98,    91,    99,
     102,    39,    40,    41,    13,    15,    17,    75,    79,    76,
      90,    75,    91,    86,    93,    61,    94,    65,    67,    68,
      74,    81,     0,    73,    83,    84,    85,    96,    82,   100,
      75,   103,     0,   105,   104,    89,     0,   106,     0,   107,
     108,   109,    23
};

static const yytype_int8 yycheck[] =
{
       0,    15,    35,     4,     7,     7,     7,     7,    75,    76,
      10,    14,    14,     4,    28,     4,     5,     6,    32,    86,
      11,    54,    13,     4,     7,    58,     7,    16,    17,    18,
      19,    14,     9,     0,    11,    21,     4,     5,     6,    25,
      26,     4,    56,    57,    12,    31,    46,     8,    16,    17,
      18,     8,    66,     4,     5,     6,     4,     5,     6,    15,
       9,    12,    11,    12,    12,    16,    17,    18,    16,    17,
      18,     4,     5,     6,     9,     9,    11,    11,     4,    14,
      14,     7,     7,    16,    17,    18,     8,     7,     9,    89,
      11,    91,     7,    14,    94,    89,     9,    91,    11,    12,
      94,     4,     4,     4,     7,     7,     7,    11,    14,    13,
       9,    11,    11,    13,     9,     3,    11,     8,     8,     8,
      12,    14,    -1,    10,     8,     8,     8,     3,    14,     3,
      11,    10,    -1,    10,    12,    15,    -1,    12,    -1,    12,
      12,    12,    10
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,     6,    16,    17,    18,    19,    21,    22,
      23,    27,     4,     7,     4,     7,     4,     7,    16,    17,
      18,    27,     0,    22,     4,    11,    13,    28,     7,    14,
      24,    27,     7,    14,    24,     7,    14,     4,    26,     4,
       4,     4,    28,    28,    28,     9,    11,    14,    24,     8,
      28,    24,     8,    26,    15,     8,     7,     7,     7,    14,
      12,     3,    12,    25,    27,     8,    14,     8,     8,    26,
      24,    24,    26,    10,    12,    11,    13,    29,    30,    14,
      24,    14,    14,     8,     8,     8,    13,    30,    30,    15,
       9,    11,    30,     9,    11,    25,     3,    12,    25,    12,
       3,    12,    25,    10,    12,    10,    12,    12,    12,    12
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    20,    21,    22,    22,    23,    23,    23,    23,    23,
      23,    23,    23,    24,    24,    25,    25,    26,    26,    27,
      27,    27,    27,    27,    27,    27,    27,    27,    27,    27,
      27,    28,    28,    28,    28,    28,    28,    29,    29,    30,
      30,    30,    30,    30,    30,    30,    30
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     6,     3,     6,     3,     6,
       3,     4,     3,     4,     0,     4,     2,     3,     1,     5,
       4,     2,     5,     4,     2,     5,     4,     2,     1,     1,
       1,     1,     3,     2,     4,     4,     3,     2,     1,     4,
       4,     6,     3,     5,     4,     6,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* NT_WHOLE: NT_GLOB_ITEM_LIST  */
#line 56 "lang.y"
  {
    ((yyval.gil)) = ((yyvsp[0].gil));
    root = (yyval.gil);
  }
#line 1238 "lang.tab.c"
    break;

  case 3: /* NT_GLOB_ITEM_LIST: NT_GLOB_ITEM NT_GLOB_ITEM_LIST  */
#line 63 "lang.y"
  {
    (yyval.gil) = (TGCons((yyvsp[-1].gi), (yyvsp[0].gil)));
  }
#line 1246 "lang.tab.c"
    break;

  case 4: /* NT_GLOB_ITEM_LIST: NT_GLOB_ITEM  */
#line 67 "lang.y"
  {
    (yyval.gil) = (TGCons((yyvsp[0].gi), TGNil()));
  }
#line 1254 "lang.tab.c"
    break;

  case 5: /* NT_GLOB_ITEM: TM_STRUCT TM_IDENT TM_LEFT_CURLY NT_FIELD_LIST TM_RIGHT_CURLY TM_SEMICOL  */
#line 73 "lang.y"
  {
    (yyval.gi) = (TStructDef((yyvsp[-4].id), (yyvsp[-2].tl)));
  }
#line 1262 "lang.tab.c"
    break;

  case 6: /* NT_GLOB_ITEM: TM_STRUCT TM_IDENT TM_SEMICOL  */
#line 77 "lang.y"
  {
    (yyval.gi) = (TStructDecl((yyvsp[-1].id)));
  }
#line 1270 "lang.tab.c"
    break;

  case 7: /* NT_GLOB_ITEM: TM_UNION TM_IDENT TM_LEFT_CURLY NT_FIELD_LIST TM_RIGHT_CURLY TM_SEMICOL  */
#line 81 "lang.y"
  {
    (yyval.gi) = (TUnionDef((yyvsp[-4].id), (yyvsp[-2].tl)));
  }
#line 1278 "lang.tab.c"
    break;

  case 8: /* NT_GLOB_ITEM: TM_UNION TM_IDENT TM_SEMICOL  */
#line 85 "lang.y"
  {
    (yyval.gi) = (TUnionDecl((yyvsp[-1].id)));
  }
#line 1286 "lang.tab.c"
    break;

  case 9: /* NT_GLOB_ITEM: TM_ENUM TM_IDENT TM_LEFT_CURLY NT_ENUM_ELE_LIST TM_RIGHT_CURLY TM_SEMICOL  */
#line 89 "lang.y"
  {
    (yyval.gi) = (TEnumDef((yyvsp[-4].id), (yyvsp[-2].eel)));
  }
#line 1294 "lang.tab.c"
    break;

  case 10: /* NT_GLOB_ITEM: TM_ENUM TM_IDENT TM_SEMICOL  */
#line 93 "lang.y"
  {
    (yyval.gi) = (TEnumDecl((yyvsp[-1].id)));
  }
#line 1302 "lang.tab.c"
    break;

  case 11: /* NT_GLOB_ITEM: TM_TYPEDEF NT_LEFT_TYPE NT_NAME_RIGHT_TYPE_EXPR TM_SEMICOL  */
#line 97 "lang.y"
  {
    (yyval.gi) = (TTypeDef((yyvsp[-2].lt), (yyvsp[-1].vde)));
  }
#line 1310 "lang.tab.c"
    break;

  case 12: /* NT_GLOB_ITEM: NT_LEFT_TYPE NT_NAME_RIGHT_TYPE_EXPR TM_SEMICOL  */
#line 101 "lang.y"
  {
    (yyval.gi) = (TVarDef((yyvsp[-2].lt), (yyvsp[-1].vde)));
  }
#line 1318 "lang.tab.c"
    break;

  case 13: /* NT_FIELD_LIST: NT_LEFT_TYPE NT_NAME_RIGHT_TYPE_EXPR TM_SEMICOL NT_FIELD_LIST  */
#line 107 "lang.y"
  {
    (yyval.tl) = (TTCons((yyvsp[-3].lt), (yyvsp[-2].vde), (yyvsp[0].tl)));
  }
#line 1326 "lang.tab.c"
    break;

  case 14: /* NT_FIELD_LIST: %empty  */
#line 111 "lang.y"
  {
    (yyval.tl) = (TTNil());
  }
#line 1334 "lang.tab.c"
    break;

  case 15: /* NT_ARGUMENT_TYPE_LIST: NT_LEFT_TYPE NT_ANNON_RIGHT_TYPE_EXPR TM_COMMA NT_ARGUMENT_TYPE_LIST  */
#line 117 "lang.y"
  {
    (yyval.tl) = (TTCons((yyvsp[-3].lt), (yyvsp[-2].vde), (yyvsp[0].tl)));
  }
#line 1342 "lang.tab.c"
    break;

  case 16: /* NT_ARGUMENT_TYPE_LIST: NT_LEFT_TYPE NT_ANNON_RIGHT_TYPE_EXPR  */
#line 121 "lang.y"
  {
    (yyval.tl) = (TTCons((yyvsp[-1].lt), (yyvsp[0].vde), TTNil()));
  }
#line 1350 "lang.tab.c"
    break;

  case 17: /* NT_ENUM_ELE_LIST: TM_IDENT TM_COMMA NT_ENUM_ELE_LIST  */
#line 127 "lang.y"
  {
    (yyval.eel) = (TECons((yyvsp[-2].id), (yyvsp[0].eel)));
  }
#line 1358 "lang.tab.c"
    break;

  case 18: /* NT_ENUM_ELE_LIST: TM_IDENT  */
#line 131 "lang.y"
  {
    (yyval.eel) = (TECons((yyvsp[0].id), TENil()));
  }
#line 1366 "lang.tab.c"
    break;

  case 19: /* NT_LEFT_TYPE: TM_STRUCT TM_IDENT TM_LEFT_CURLY NT_FIELD_LIST TM_RIGHT_CURLY  */
#line 137 "lang.y"
  {
    (yyval.lt) = (TNewStructType((yyvsp[-3].id), (yyvsp[-1].tl)));
  }
#line 1374 "lang.tab.c"
    break;

  case 20: /* NT_LEFT_TYPE: TM_STRUCT TM_LEFT_CURLY NT_FIELD_LIST TM_RIGHT_CURLY  */
#line 141 "lang.y"
  {
    (yyval.lt) = (TNewStructType(NULL, (yyvsp[-1].tl)));
  }
#line 1382 "lang.tab.c"
    break;

  case 21: /* NT_LEFT_TYPE: TM_STRUCT TM_IDENT  */
#line 145 "lang.y"
  {
    (yyval.lt) = (TStructType((yyvsp[0].id)));
  }
#line 1390 "lang.tab.c"
    break;

  case 22: /* NT_LEFT_TYPE: TM_UNION TM_IDENT TM_LEFT_CURLY NT_FIELD_LIST TM_RIGHT_CURLY  */
#line 149 "lang.y"
  {
    (yyval.lt) = (TNewUnionType((yyvsp[-3].id), (yyvsp[-1].tl)));
  }
#line 1398 "lang.tab.c"
    break;

  case 23: /* NT_LEFT_TYPE: TM_UNION TM_LEFT_CURLY NT_FIELD_LIST TM_RIGHT_CURLY  */
#line 153 "lang.y"
  {
    (yyval.lt) = (TNewUnionType(NULL, (yyvsp[-1].tl)));
  }
#line 1406 "lang.tab.c"
    break;

  case 24: /* NT_LEFT_TYPE: TM_UNION TM_IDENT  */
#line 157 "lang.y"
  {
    (yyval.lt) = (TUnionType((yyvsp[0].id)));
  }
#line 1414 "lang.tab.c"
    break;

  case 25: /* NT_LEFT_TYPE: TM_ENUM TM_IDENT TM_LEFT_CURLY NT_ENUM_ELE_LIST TM_RIGHT_CURLY  */
#line 161 "lang.y"
  {
    (yyval.lt) = (TNewEnumType((yyvsp[-3].id), (yyvsp[-1].eel)));
  }
#line 1422 "lang.tab.c"
    break;

  case 26: /* NT_LEFT_TYPE: TM_ENUM TM_LEFT_CURLY NT_ENUM_ELE_LIST TM_RIGHT_CURLY  */
#line 165 "lang.y"
  {
    (yyval.lt) = (TNewEnumType(NULL, (yyvsp[-1].eel)));
  }
#line 1430 "lang.tab.c"
    break;

  case 27: /* NT_LEFT_TYPE: TM_ENUM TM_IDENT  */
#line 169 "lang.y"
  {
    (yyval.lt) = (TEnumType((yyvsp[0].id)));
  }
#line 1438 "lang.tab.c"
    break;

  case 28: /* NT_LEFT_TYPE: TM_INT  */
#line 173 "lang.y"
  {
    (yyval.lt) = (TIntType());
  }
#line 1446 "lang.tab.c"
    break;

  case 29: /* NT_LEFT_TYPE: TM_CHAR  */
#line 177 "lang.y"
  {
    (yyval.lt) = (TCharType());
  }
#line 1454 "lang.tab.c"
    break;

  case 30: /* NT_LEFT_TYPE: TM_IDENT  */
#line 181 "lang.y"
  {
    (yyval.lt) = (TDefinedType((yyvsp[0].id)));
  }
#line 1462 "lang.tab.c"
    break;

  case 31: /* NT_NAME_RIGHT_TYPE_EXPR: TM_IDENT  */
#line 188 "lang.y"
  {
    (yyval.vde) = (TOrigType((yyvsp[0].id)));
  }
#line 1470 "lang.tab.c"
    break;

  case 32: /* NT_NAME_RIGHT_TYPE_EXPR: TM_LEFT_PAREN NT_NAME_RIGHT_TYPE_EXPR TM_RIGHT_PAREN  */
#line 192 "lang.y"
  {
    (yyval.vde) = ((yyvsp[-1].vde));
  }
#line 1478 "lang.tab.c"
    break;

  case 33: /* NT_NAME_RIGHT_TYPE_EXPR: TM_DEREF NT_NAME_RIGHT_TYPE_EXPR  */
#line 196 "lang.y"
  {
    (yyval.vde) = (TPtrType((yyvsp[0].vde)));
  }
#line 1486 "lang.tab.c"
    break;

  case 34: /* NT_NAME_RIGHT_TYPE_EXPR: NT_NAME_RIGHT_TYPE_EXPR TM_LEFT_SQUARE TM_NAT TM_RIGHT_SQUARE  */
#line 200 "lang.y"
  {
    (yyval.vde) = (TArrayType((yyvsp[-3].vde), (yyvsp[-1].n)));
  }
#line 1494 "lang.tab.c"
    break;

  case 35: /* NT_NAME_RIGHT_TYPE_EXPR: NT_NAME_RIGHT_TYPE_EXPR TM_LEFT_PAREN NT_ARGUMENT_TYPE_LIST TM_RIGHT_PAREN  */
#line 204 "lang.y"
  {
    (yyval.vde) = (TFuncType((yyvsp[-3].vde), (yyvsp[-1].tl)));
  }
#line 1502 "lang.tab.c"
    break;

  case 36: /* NT_NAME_RIGHT_TYPE_EXPR: NT_NAME_RIGHT_TYPE_EXPR TM_LEFT_PAREN TM_RIGHT_PAREN  */
#line 208 "lang.y"
  {
    (yyval.vde) = (TFuncType((yyvsp[-2].vde), TTNil()));
  }
#line 1510 "lang.tab.c"
    break;

  case 37: /* NT_ANNON_RIGHT_TYPE_EXPR: TM_DEREF NT_ANNON_RIGHT_TYPE_EXPR_2  */
#line 214 "lang.y"
  {
    (yyval.vde) = (TPtrType((yyvsp[0].vde)));
  }
#line 1518 "lang.tab.c"
    break;

  case 38: /* NT_ANNON_RIGHT_TYPE_EXPR: NT_ANNON_RIGHT_TYPE_EXPR_2  */
#line 218 "lang.y"
  {
    (yyval.vde) = ((yyvsp[0].vde));
  }
#line 1526 "lang.tab.c"
    break;

  case 39: /* NT_ANNON_RIGHT_TYPE_EXPR_2: TM_LEFT_PAREN TM_DEREF NT_ANNON_RIGHT_TYPE_EXPR_2 TM_RIGHT_PAREN  */
#line 224 "lang.y"
  {
    (yyval.vde) = (TPtrType((yyvsp[-1].vde)));
  }
#line 1534 "lang.tab.c"
    break;

  case 40: /* NT_ANNON_RIGHT_TYPE_EXPR_2: NT_ANNON_RIGHT_TYPE_EXPR_2 TM_LEFT_SQUARE TM_NAT TM_RIGHT_SQUARE  */
#line 228 "lang.y"
  {
    (yyval.vde) = (TArrayType((yyvsp[-3].vde), (yyvsp[-1].n)));
  }
#line 1542 "lang.tab.c"
    break;

  case 41: /* NT_ANNON_RIGHT_TYPE_EXPR_2: TM_LEFT_PAREN NT_ANNON_RIGHT_TYPE_EXPR_2 TM_LEFT_SQUARE TM_NAT TM_RIGHT_SQUARE TM_RIGHT_PAREN  */
#line 232 "lang.y"
  {
    (yyval.vde) = (TArrayType((yyvsp[-4].vde), (yyvsp[-2].n)));
  }
#line 1550 "lang.tab.c"
    break;

  case 42: /* NT_ANNON_RIGHT_TYPE_EXPR_2: NT_ANNON_RIGHT_TYPE_EXPR_2 TM_LEFT_PAREN TM_RIGHT_PAREN  */
#line 236 "lang.y"
  {
    (yyval.vde) = (TFuncType((yyvsp[-2].vde), TTNil()));
  }
#line 1558 "lang.tab.c"
    break;

  case 43: /* NT_ANNON_RIGHT_TYPE_EXPR_2: TM_LEFT_PAREN NT_ANNON_RIGHT_TYPE_EXPR_2 TM_LEFT_PAREN TM_RIGHT_PAREN TM_RIGHT_PAREN  */
#line 240 "lang.y"
  {
    (yyval.vde) = (TFuncType((yyvsp[-3].vde), TTNil()));
  }
#line 1566 "lang.tab.c"
    break;

  case 44: /* NT_ANNON_RIGHT_TYPE_EXPR_2: NT_ANNON_RIGHT_TYPE_EXPR_2 TM_LEFT_PAREN NT_ARGUMENT_TYPE_LIST TM_RIGHT_PAREN  */
#line 244 "lang.y"
  {
    (yyval.vde) = (TFuncType((yyvsp[-3].vde), (yyvsp[-1].tl)));
  }
#line 1574 "lang.tab.c"
    break;

  case 45: /* NT_ANNON_RIGHT_TYPE_EXPR_2: TM_LEFT_PAREN NT_ANNON_RIGHT_TYPE_EXPR_2 TM_LEFT_PAREN NT_ARGUMENT_TYPE_LIST TM_RIGHT_PAREN TM_RIGHT_PAREN  */
#line 248 "lang.y"
  {
    (yyval.vde) = (TFuncType((yyvsp[-4].vde), (yyvsp[-2].tl)));
  }
#line 1582 "lang.tab.c"
    break;

  case 46: /* NT_ANNON_RIGHT_TYPE_EXPR_2: %empty  */
#line 252 "lang.y"
  {
    (yyval.vde) = (TOrigType(NULL));
  }
#line 1590 "lang.tab.c"
    break;


#line 1594 "lang.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 256 "lang.y"


void yyerror(char* s)
{
  fprintf(stderr , "%s\n",s);
}
