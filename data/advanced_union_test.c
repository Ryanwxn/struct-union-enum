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
    } ;
};


union union_test_with_union
{
    union inner_union_1
    {
        int x ;
        int * y ;
        int func1 () ;
        int func2 ( int ) ;
    };

    union inner_union_2
    {
        int func3 ( int ( int ) ) ;
        int func4 ( int [ 10 ] ) ;
        type1 func5 ( type2 * ( ) ) ;
        char func6 ( char ( * ) ( ) ) ;
    };
    
    union inner_union_3
    {
        int x;
        int func7 ( int * * ( ) ) ;
        enum TeamMember { 
            WXN , FHC , ZH , LJN , WYX
        } ;
    };
};


union union_test_with_struct
{
    struct inner_struct_1
    {
        int x ;
        int * y ;
        int func1 () ;
        int func2 ( int ) ;
    };

    struct inner_struct_2
    {
        int func3 ( int ( int ) ) ;
        int func4 ( int [ 10 ] ) ;
        type1 func5 ( type2 * ( ) ) ;
        char func6 ( char ( * ) ( ) ) ;
    };
    
    struct inner_struct_3
    {
        int x;
        int func7 ( int * * ( ) ) ;
        enum TeamMember { 
            WXN , FHC , ZH , LJN , WYX
        } ;
    };
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
    };

    union inner_part_2
    {
        union inner_struct_1
        {
            int x ;
            int * y ;
            int func1 () ;
            int func2 ( int ) ;
        };

        union inner_struct_2
        {
            int func3 ( int ( int ) ) ;
            int func4 ( int [ 10 ] ) ;
            type1 func5 ( type2 * ( ) ) ;
            char func6 ( char ( * ) ( ) ) ;
        };
        
        union inner_struct_3
        {
            int x;
            int func7 ( int * * ( ) ) ;
            enum TeamMember { 
                WXN , FHC , ZH , LJN , WYX
            } ;
        };
    };

};