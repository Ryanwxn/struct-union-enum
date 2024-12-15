typedef int INT ;
typedef char CHAR ;
typedef left LEFT ;

typedef struct struct_name { int member ; } name ;
typedef struct struct_name { int member1 ; union { int union_member1 ; char union_member2 ; } member2 ; } name ;
typedef struct struct_name { } name ;
typedef struct { int member ; } name ;
typedef struct { int member1 ; union { int union_member1 ; char union_member2 ; } member2 ; } name ;
typedef struct { } name ;
typedef struct struct_def name ;

typedef union uniom_name { int member ; } name ;
typedef union union_name { int member1 ; struct { int union_member1 ; char union_member2 ; } member2 ; } name ;
typedef union union_name { } name ;
typedef union { int member ; } name ;
typedef union { int member1 ; struct { int union_member1 ; char union_member2 ; } member2 ; } name ;
typedef union { } name ;
typedef union union_def name ;

typedef enum enum_name { member } name ;
typedef enum enum_name { member1 , member2 } name ;
typedef enum { member } name ;
typedef enum { member1 , member2 } name ;
typedef enum enum_def name ;