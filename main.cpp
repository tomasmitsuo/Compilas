# include <stdio.h>
# include <stdlib.h>

extern FILE*yyin;
extern int running;
extern int lineNumber;

int yylex();
int yyparse();

int isRunning();
int getLineNumber();
void symbolPrintTable();

int main(int argc, char** argv)
{
    if(argc < 2)
    {
        fprintf(stderr, "Call filename\n");
        exit(1);
    }
    if(0 == (yyin=fopen(argv[1],"r")))
    {
        fprintf(stderr, "nao abriu o arquivo");
        exit(1);
    }

    // MAIN PARA TESTE DA ETAPA 1

    // int tok;

    // while(running)
    // {
    //     tok = yylex();
    //     if(!running) break;

    //     switch (tok) {
    //         case KW_BYTE: {fprintf(stderr, "byte ");}
    //         break;
    //         case KW_INT: {fprintf(stderr, "int ");}
    //         break;
    //         case KW_REAL: {fprintf(stderr, "real ");}
    //         break;
    //         case KW_IF: {fprintf(stderr, "if ");}
    //         break;
    //         case KW_ELSE: {fprintf(stderr, "else ");}
    //         break;
    //         case KW_DO: {fprintf(stderr, "do ");}
    //         break;
    //         case KW_WHILE: {fprintf(stderr, "while ");}
    //         break;
    //         case KW_READ: {fprintf(stderr, "read ");}
    //         break;
    //         case KW_PRINT: {fprintf(stderr, "print ");}
    //         break;
    //         case KW_RETURN: {fprintf(stderr, "return ");}
    //         break;
    //         case OPERATOR_LE: {fprintf(stderr, "le ");}
    //         break;
    //         case OPERATOR_GE: {fprintf(stderr, "ge ");}
    //         break;
    //         case OPERATOR_EQ: {fprintf(stderr, "eq ");}
    //         break;
    //         case OPERATOR_DIF: {fprintf(stderr, "dif ");}
    //         break;
    //         case TK_IDENTIFIER: {fprintf(stderr, "id ");}
    //         break;
    //         case LIT_INT: {fprintf(stderr, "lit_int ");}
    //         break;
    //         case LIT_CHAR: {fprintf(stderr, "lit_char ");}
    //         break;
    //         case LIT_REAL: {fprintf(stderr, "lit_real ");}
    //         break;
    //         case LIT_STRING: {fprintf(stderr, "lit_string ");}
    //         break;
    //         case TOKEN_ERROR: {fprintf(stderr, "ERRO");}
    //         break;

    //         default:
    //             {
    //                 fprintf(stderr, "%c ", tok);
    //             }    
    //     }
    // }
    //while(running){
     //   yyparse();
    //}

    yyparse();

    int linhas = getLineNumber();
    printf("\nQUANTIDADE DE LINHAS: %d\n\n", linhas);

    printf("TABELA DE SÍMBOLOS:\n");
    symbolPrintTable();
}