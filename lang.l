%option noyywrap yylineno
%option outfile="lexer.c" header-file="lexer.h"
%{
#include "lang.h"
#include "parser.h"
%}

%%

0|[1-9][0-9]* {
    yylval.n = build_nat(yytext, yyleng);
    return TM_NAT;
}

"int" {
    return TM_INT;
}

"char" {
    return TM_CHAR;
}

"struct" {
    return TM_STRUCT;
}

"union" {
    return TM_UNION;
}

"enum" {
    return TM_ENUM;
}

"typedef" {
    return TM_TYPEDEF;
}

[_A-Za-z][_A-Za-z0-9]* {
    yylval.id = new_str(yytext, yyleng);
    return TM_IDENT;
}

"(" {
    return TM_LEFT_PAREN;
}

")" {
    return TM_RIGHT_PAREN;
}

"[" {
    return TM_LEFT_SQUARE;
}

"]" {
    return TM_RIGHT_SQUARE;
}

"{" {
    return TM_LEFT_CURLY;
}

"}" {
    return TM_RIGHT_CURLY;
}

";" {
    return TM_SEMICOL;
}

"*" {
    return TM_DEREF;
}

"," {
    return TM_COMMA;
}

[ \t\n\r]    { };

.   {printf("%s",yytext);
     return -1; }
%%
