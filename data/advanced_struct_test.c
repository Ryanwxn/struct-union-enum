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
    } ;
};


struct struct_test_with_struct
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


struct struct_test_with_union
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

struct struct_test_with_struct_in_struct
{
    int p;
    union inner_part_1
    {
        int x ;
        int * y ;
        int func1 () ;
        int func2 ( int ) ;
    };

    struct inner_part_2
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

};
