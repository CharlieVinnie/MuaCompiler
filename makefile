main: lexer.o lang.o mylexer.o mylang.o main.o
	g++ -std=c++11 lexer.o lang.o mylexer.o mylang.o main.o -o main 2>compile.log

lexer.cpp: lang.l
	flex lang.l

lang.cpp: lang.y
	bison -o lang.cpp lang.y --header=lang.hpp --debug

lexer.o: lexer.cpp lexer.hpp
	g++ -c lexer.cpp 2>compile.log

lang.o: lang.cpp lang.hpp
	g++ -c lang.cpp 2>compile.log

mylexer.o: mylexer.cpp mylang.hpp lexer.hpp lang.hpp
	g++ -c mylexer.cpp 2>compile.log

mylang.o: mylang.cpp mylang.hpp
	g++ -c mylang.cpp 2>compile.log

main.o: main.cpp lang.hpp lexer.hpp mylang.hpp
	g++ -c main.cpp 2>compile.log