#include <stdio.h>
#include "funcoes.hpp"

extern int lineNumber;
extern int running;

int getLineNumber(void)
{
    return lineNumber;
}


int isRunning(void)
{
    return running;
}

void initMe(void)
{
    
}