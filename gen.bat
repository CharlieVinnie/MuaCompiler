flex lang.l
bison -o lang.cpp lang.y --header=lang.hpp --debug
g++ -std=c++11 lexer.cpp lang.cpp mylexer.cpp mylang.cpp main.cpp -o main -Wno-write-strings 2>compile.log 