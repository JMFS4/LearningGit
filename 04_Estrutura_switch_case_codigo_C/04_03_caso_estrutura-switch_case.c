#include<stdio.h>
/// @brief 
///  um programa que implemente uma calculadora com operações entre inteiros, isto é, 
/// que perante 2 inteiros lido do teclado e um operador (+, -, *, /,%) devolva o resultado da operação;
/// @return 
int main()
{
    int valor1, valor2;
    char operador;
    printf("Introduza o primeiro operando: ");

    printf("\nIntroduza o operador: ");


    printf("\nIntroduza o segundo  operando: ");


    switch (operador)
    {
    case '+':
       printf("O valor da soma de %d com %d e %d",valor1, valor2, valor1+valor2 );
        break;
        
    
    default:
        printf("operando desconhecido");
        break;
    }
}
