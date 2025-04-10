#include "symbols.hpp"
#include <string>
#include <map>

map<string, SYMBOL*> SymbolTable;

string SymbolName[] = {
    "lIT_INT", "LIT_CHAR", "LIT_REAL", "LIT_STRING",
    "VAR_INT", "VAR_CHAR", "VAR_REAL",
    "VEC_INT", "VEC_CHAR", "VEC_REAL",
    "FUNC_INT", "FUNC_CHAR", "FUNC_REAL"
};

SYMBOL *symbolInsert(int type,char* text)
{
    if (SymbolTable.find(string(text)) != SymbolTable.end())
    {
        return SymbolTable.find(string(text))->second;
    }

    SYMBOL *newSymbol = new SYMBOL(type, string(text));
    SymbolTable[string(text)] = newSymbol;
    return newSymbol;
}

void symbolPrintTable()
{
    // Percorre a tabela e imprime os símbolos
    for (const auto& entry : SymbolTable)
    {
        printf("Symbol[%s,%s]\n",SymbolName[entry.second->type].c_str(), entry.second->text.c_str());
    }
}