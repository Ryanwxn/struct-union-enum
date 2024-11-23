struct Struct_1
{
    int a_Struct_1 ;
    char b_Struct_1 ;
} ;

struct Struct_2
{
    int a_Struct_2 ;
    char b_Struct_2 ;
    Struct_1 struct_1 ;
} ;

struct Struct_3
{
    int a_Struct_3 ;
    char b_Struct_3 ;
    Struct_1 Struct_11 ;
    Struct_2 struct_2 ;
} ;


union Union_1
{
    int a_Union_1 ;
    char b_Union_1 ;
} ;

union Union_2
{
    int a_Union_2 ;
    char b_Union_2 ;
    Union_1 Union_1 ;
} ;

union Union_3
{
    int a_Union_3 ;
    char b_Union_3 ;
    Union_1 Union_11 ;
    Union_2 Union_2 ;
} ;