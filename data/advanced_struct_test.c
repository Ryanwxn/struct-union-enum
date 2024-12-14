struct simple_test
{
    int x ;
    int * y ;
    int func1 () ;
    int func2 ( int ) ;
} ;


struct struct_test_with_function
{
    int func3 ( int ( int ) ) ;
    int func4 ( int [ 10 ] ) ;
    type1 func5 ( type2 * ( ) ) ;
    char func6 ( char ( * ) ( ) ) ;
};


struct struct_test_with_enum
{
    int x;
    int func7 ( int * * ( ) ) ;
    enum TeamMember { 
        WXN , FHC , ZH , LJN , WYX
    } Team ;
};

struct struct_test_with_struct
{
    struct inner_struct_1
    {
        int x ;
        int * y ;
        int func1 () ;
        int func2 ( int ) ;
    } Struct_1 ;

    struct inner_struct_2
    {
        int func3 ( int ( int ) ) ;
        int func4 ( int [ 10 ] ) ;
        type1 func5 ( type2 * ( ) ) ;
        char func6 ( char ( * ) ( ) ) ;
    } Struct_2 ;
    
    struct inner_struct_3
    {
        int x;
        int func7 ( int * * ( ) ) ;
        enum TeamMember { 
            WXN , FHC , ZH , LJN , WYX
        } Team ;
    } Struct_3 ;
};


struct struct_test_with_union
{
    union inner_union_1
    {
        int x ;
        int * y ;
        int func1 () ;
        int func2 ( int ) ;
    } Union_1 ;

    union inner_union_2
    {
        int func3 ( int ( int ) ) ;
        int func4 ( int [ 10 ] ) ;
        type1 func5 ( type2 * ( ) ) ;
        char func6 ( char ( * ) ( ) ) ;
    } Union_2 ;
    
    union inner_union_3
    {
        int x;
        int func7 ( int * * ( ) ) ;
        enum TeamMember { 
            WXN , FHC , ZH , LJN , WYX
        } Team ;
    } Union_3 ;
};

struct struct_test_with_struct_in_struct
{
    int p;
    union inner_part_1
    {
        int x ;
        int * y ;
        int func1 () ;
        int func2 ( int ) ;
    } Union_1 ;

    struct inner_part_2
    {
        struct inner_struct_1
        {
            int x ;
            int * y ;
            int func1 () ;
            int func2 ( int ) ;
        } Struct_1;

        struct inner_struct_2
        {
            int func3 ( int ( int ) ) ;
            int func4 ( int [ 10 ] ) ;
            type1 func5 ( type2 * ( ) ) ;
            char func6 ( char ( * ) ( ) ) ;
        } Struct_2;
        
        struct inner_struct_3
        {
            int x;
            int func7 ( int * * ( ) ) ;
            enum TeamMember { 
                WXN , FHC , ZH , LJN , WYX
            } Team ;
        } Struct_3 ;
    } Struct_in_struct_1;

};

