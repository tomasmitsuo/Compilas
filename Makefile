CXX = g++
CXXFLAGS = -std=c++11 -Wall

target: etapa2

etapa2: lex.yy.o main.o symbols.o funcoes.o parser.tab.o
	$(CXX) $(CXXFLAGS) lex.yy.o main.o symbols.o funcoes.o parser.tab.o -o etapa2

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

lex.yy.cpp: scanner.l parser.tab.hpp
	flex -o lex.yy.cpp scanner.l

parser.tab.cpp parser.tab.hpp: parser.ypp
	bison -d parser.ypp
clean:
	rm -f etapa2 lex.yy.cpp parser.tab.cpp parser.tab.hpp *.o
