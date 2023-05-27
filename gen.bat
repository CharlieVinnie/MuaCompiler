flex lang.l
bison -o lang.cpp lang.y --header=lang.hpp
g++ -std=c++11 lexer.cpp lang.cpp mylexer.cpp main.cpp -o main -Wno-write-strings 2>compile.log 