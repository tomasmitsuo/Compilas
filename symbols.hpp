// ALUNO: TOMÁS MITSUO DIAS UEDA - 00344595

#ifndef SYMBOL_HPP
#define SYMBOL_HPP

#include <string>
#include <vector>

using namespace std;

enum SymbolType{
    SYMBOL_LIT_INT, SYMBOL_LIT_CHAR, SYMBOL_LIT_REAL, SYMBOL_LIT_STRING, // LITERAIS
    SYMBOL_ID, SYMBOL_LABEL,
    VAR,
    VET,
    FUNC, FUNC_PAR
};

enum DataType{
    NONE, INT, CHAR, BYTE, REAL, STRING, OTHER
};

struct SYMBOL
{
    int type;
    string text;
    int datatype;
    bool isFunc;
    int num_par_func;
    bool isVec;
    std::vector<int> type_par_func;

    public:
    SYMBOL(int t, string s, int d, bool isFunc, int n, bool iv, std::vector<int> type_par_func):
     type(t),
     text(s),
    datatype(d),
    isFunc(isFunc), 
    num_par_func(n), 
    isVec(iv), 
    type_par_func(type_par_func) 
    {};
};

SYMBOL* symbolInsert(int type,char* text, int datatype, bool isFunc, int num_par_func, bool isVec, std::vector<int> type_par_func);
void symbolPrintTable();
int checkSymbolsUndeclared();
SYMBOL* makeTemp();
SYMBOL* makeLabel();

#endif // SYMBOL_HPP
