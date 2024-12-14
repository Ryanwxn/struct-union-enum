union simple_test
{
    int x ;
    int * y ;
    int func1 () ;
    int func2 ( int ) ;
} ;


union union_test_with_function
{
    int func3 ( int ( int ) ) ;
    int func4 ( int [ 10 ] ) ;
    type1 func5 ( type2 * ( ) ) ;
    char func6 ( char ( * ) ( ) ) ;
};


union union_test_with_enum
{
    int x;
    int func7 ( int * * ( ) ) ;
    enum TeamMember { 
        WXN , FHC , ZH , LJN , WYX
    } Team ;
};


union union_test_with_union
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


union union_test_with_struct
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

union union_test_with_union_in_union
{
    int p;
    int func1 () ;

    struct inner_part_1
    {
        int x ;
        int * y ;
        int func1 () ;
        int func2 ( int ) ;
    } Struct_1;

    union inner_part_2
    {
        union inner_struct_1
        {
            int x ;
            int * y ;
            int func1 () ;
            int func2 ( int ) ;
        } Union_1 ;

        union inner_struct_2
        {
            int func3 ( int ( int ) ) ;
            int func4 ( int [ 10 ] ) ;
            type1 func5 ( type2 * ( ) ) ;
            char func6 ( char ( * ) ( ) ) ;
        } Union_2 ;
        
        union inner_struct_3
        {
            int x;
            int func7 ( int * * ( ) ) ;
            enum TeamMember { 
                WXN , FHC , ZH , LJN , WYX
            } Team ;
        } Union_3;
    } Union_in_union_1 ;

};