#ifndef SYMBOL_HPP
#define SYMBOL_HPP

#include <string>

using namespace std;

enum SymbolType{
    SYMBOL_LIT_INT, SYMBOL_LIT_CHAR, SYMBOL_LIT_REAL, SYMBOL_LIT_STRING,
    SYMBOL_VAR_INT, SYMBOL_VAR_BYTE, SYMBOL_VAR_REAL,
    SYMBOL_VEC_INT, SYMBOL_VEC_BYTE, SYMBOL_VEC_REAL,
    SYMBOL_FUNC_INT, SYMBOL_FUNC_BYTE, SYMBOL_FUNC_REAL
};

struct SYMBOL
{
    int type;
    string text;

    public:
    SYMBOL(int t, string s): type(t), text(s) {};
};

SYMBOL* symbolInsert(int type,char* text);
void symbolPrintTable();

#endif // SYMBOL_HPP
