%option noyywrap yylineno
%option outfile="lexer.cpp" header-file="lexer.hpp"
%{
#include "mylang.hpp"
#include "lang.hpp"
%}

%%

"and" { return TOK_AND; }
"break" { return TOK_BREAK; }
"do" { return TOK_DO; }
"else" { return TOK_ELSE; }
"elseif" { return TOK_ELSEIF; }
"end" { return TOK_END; }
"false" { return TOK_FALSE; }
"for" { return TOK_FOR; }
"function" { return TOK_FUNCTION; }
"if" { return TOK_IF; }
"in" { return TOK_IN; }
"local" { return TOK_LOCAL; }
"nil" { return TOK_NIL; }
"not" { return TOK_NOT; }
"or" { return TOK_OR; }
"repeat" { return TOK_REPEAT; }
"return" { return TOK_RETURN; }
"then" { return TOK_THEN; }
"true" { return TOK_TRUE; }
"until" { return TOK_UNTIL; }
"while" { return TOK_WHILE; }

[0-9]+ {
    yylval.val=MakeDemInt(yytext,yyleng);
    return TOK_INT;
}

0(x|X)[0-9a-fA-F]+ {
    yylval.val=MakeHexInt(yytext,yyleng);
    return TOK_INT;
}

[0-9]+(\.[0-9]*)?([eE][+\-]?[0-9]+)? {
    yylval.val=MakeReal(yytext,yyleng);
    return TOK_INT;
}

\.[0-9]+([eE][+\-]?[0-9]+)? {
    yylval.val=MakeReal(yytext,yyleng);
    return TOK_INT;
}

(\"([^\\\"]|\\[\\\'\"n])*\")|(\'([^\\\']|\\[\\\'\"n])*\') {
    yylval.str=MakeString(yytext+1,yyleng-2);
    return TOK_STRING;
}

--.* {
    return TOK_COMMENT;
}

"+" { return TOK_ADD; }
"-" { return TOK_SUB; }
"*" { return TOK_MUL; }
"/" { return TOK_DIV; }
"%" { return TOK_MOD; }
"^" { return TOK_XOR; }
"#" { return TOK_CROSS; }
"==" { return TOK_EQ; }
">=" { return TOK_GEQ; }
"<=" { return TOK_LEQ; }
">" { return TOK_GT; }
"<" { return TOK_LT; }
"~=" { return TOK_NEQ; }
"=" { return TOK_ASSIGN; }
"(" { return TOK_L_BRACKET; }
")" { return TOK_R_BRACKET; }
"[" { return TOK_L_SQUARE; }
"]" { return TOK_R_SQUARE; }
"{" { return TOK_L_BRACE; }
"}" { return TOK_R_BRACE; }
";" { return TOK_SEMICOL; }
":" { return TOK_COLON; }
"," { return TOK_COMMA; }
"..." { return TOK_3DOT; } 
".." { return TOK_2DOT; } 
"." { return TOK_DOT; }

[_A-Za-z][_A-Za-z0-9]* {
    yylval.str=MakeString(yytext,yyleng);
    return TOK_NAME;
}

\n { return TOK_EOL; }

[ \t\r]    { };

.   {printf("Compile Error: wut iz %s",yytext);
     return -1; }
%%
