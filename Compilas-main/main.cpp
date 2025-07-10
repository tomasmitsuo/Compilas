// ALUNO: TOMÁS MITSUO DIAS UEDA - 00344595

# include <stdio.h>
# include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>

# include "tac.hpp"
# include "ast.hpp"
# include "symbols.hpp"
# include "semantic.hpp"

extern FILE*yyin;
extern int running;
extern int lineNumber;

extern bool hasSyntaxError;
extern int syntaxErrorCount;
extern AST* programAST;

char* outputFile = NULL;

int yylex();
int yyparse();
int isRunning();
int getLineNumber();
void symbolPrintTable();
void astPrint(AST* ast, int level);

int main(int argc, char** argv)
{

    // TODO: IMPLEMENTAR A ETAPA 7

    // i) RECUPERAÇÃO DE ERROS
    // ii) OTIMIZAÇÃO DE CÓDIGO
    
    if(argc < 3)
    {
        fprintf(stderr, "Call filename\n"); exit(1);
    }

    if(0 == (yyin=fopen(argv[1],"r")))
    {
        fprintf(stderr, "nao abriu o arquivo"); exit(2);
    }

    outputFile = argv[2];
    
    int parseResult = yyparse();


    if (parseResult == 0) 
    {
        // Agora você tem acesso à AST
        if (programAST) 
        {
            fprintf(stderr,"\nQUANTIDADE DE ERROS SINTÁTICOS: %d\n", syntaxErrorCount);
            // Análise semântica
            printf("\nERROS SEMANTICOS:\n");
            checkAndSetDeclarations(programAST); checkUndeclared(); checkOperands(programAST); checkAssignments(programAST);
            checkVariables(programAST); checkVectors(programAST); checkNumParFunc(programAST); checkTypeParFunc(programAST); checkReturn(programAST);
            
            
            if(syntaxErrorCount == 0)
            {
                printf("\nPROGRAMA COMPILADO SEM ERROS SINTATICOS!\n");
            }
            else
            {   
                fprintf(stderr, "\nATENÇÃO: Erros de sintaxe encontrados. A geração de código foi interrompida.\n");
                exit(3); // ABORTA A EXECUÇÃO DO 
            }
            
            if (SemanticErrors > 0) 
            {
                fprintf(stderr, "\nErros semanticos existentes: %d\n", SemanticErrors);
                exit(4);
            }
            else
            {
                printf("PROGRAMA COMPILADO SEM ERROS SEMANTICOS!\n");
            }
            
            // Geração de código
            TAC* code = generateCode(programAST);
            //tacPrintBackwards(code);
            code = tacReverse(code);
            generateAsm(code);
            
            // Saída para arquivo
            std::ofstream outFile(outputFile);
            if (outFile.is_open()) 
            {
                descompile(programAST, outFile);
                outFile.close();
            }
        }
    } 
    else 
    {
        fprintf(stderr, "Falha crítica na análise sintática.\n");
        return parseResult;
    }
    
    
    int linhas = getLineNumber(); printf("\nQUANTIDADE DE LINHAS: %d\n\n", linhas);
    //printf("\nTABELA DE SÍMBOLOS:\n");symbolPrintTable(); printf("\n");

    if(SemanticErrors > 0)
    {
        fprintf(stderr, "\nErros semanticos existentes: %d\n", SemanticErrors); exit(4);
    }

    printf("COMPILAÇÃO CONCLUÍDA!\n");
}
