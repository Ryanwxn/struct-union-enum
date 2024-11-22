%{
	// this part is copied to the beginning of the parser
	#include <stdio.h>
	#include "lang.h"
	#include "lexer.h"
	void yyerror(char *);
	int yylex(void);
        struct cmd * root;
%}

%union {
unsigned int n;
char * id;
struct glob_item_list * gil;
struct glob_item * gi;
struct var_decl_expr * vde;
struct left_type * lt;
struct enum_ele_list * eel;
struct type_list * tl;
void * none;
}

// Terminals
%token <n> TM_NAT
%token <id> TM_IDENT
%token <none> TM_INT TM_CHAR
%token <none> TM_LEFT_CURLY TM_RIGHT_CURLY
%token <none> TM_LEFT_SQUARE TM_RIGHT_SQUARE
%token <none> TM_LEFT_PAREN TM_RIGHT_PAREN
%token <none> TM_DEREF
%token <none> TM_SEMICOL
%token <none> TM_STRUCT TM_UNION TM_ENUM

// Nonterminals
%type <gil> NT_WHOLE
%type <gil> NT_GLOB_ITEM_LIST
%type <gi> NT_GLOB_ITEM
%type <vde> NT_VAR_DECL_EXPR
%type <lt> NT_LEFT_TYPE
%type <eel> NT_ENUM_ELE_LIST
%type <tl> NT_TYPE_LIST

// Priority
%left TM_LEFT_CURLY TM_RIGHT_CURLY TM_LEFT_SQUARE TM_RIGHT_SQUARE TM_LEFT_PAREN TM_RIGHT_PAREN
%right TM_DEREF
%right TM_SEMICOL

%%
NT_WHOLE:
  NT_GLOB_ITEM_LIST
  {
    ($$) = ($1);
    root = $$;
  }

NT_GLOB_ITEM_LIST:
  NT_GLOB_ITEM TM_SEMICOL NT_GLOB_ITEM_LIST
  {
    $$ = (TGCons($1, $3));
  }
| NT_GLOB_ITEM
  {
    $$ = (TGCons($1, TGNil()));
  }

NT_GLOB_ITEM:
