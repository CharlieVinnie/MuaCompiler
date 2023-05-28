#include "lang.hpp"
#include "mylang.hpp"
#include "lexer.hpp"

int main() {
#ifdef YYDEBUG
  yydebug = 1;
#endif
    yyin = stdin;
    yyparse();
    fprintf(stderr,"Parse Done\n");
    PrintProgram();
}
