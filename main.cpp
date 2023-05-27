#include "lang.hpp"
#include "mylang.hpp"
#include "lexer.hpp"

int main() {
    yyin = stdin;
    yyparse();
    fclose(stdin);
}
