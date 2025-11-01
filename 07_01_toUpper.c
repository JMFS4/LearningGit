#include<stdio.h>

/// @brief função que convert um carater na sua correspondente  maiúscula
/// código ASCII das minúsculas é: 97–122;
/// código ASCII das maiúscula é: 65–90;
/// @param chAConverter - caracter a ser convertido, se isso for possível em maiúscula
/// @return 
char toUpper(char chAConverter)
{
    if ( chAConverter <= 122 && chAConverter >= 97)
    {
        return (char)(chAConverter - 32 );
        
    }
    else
    {
        return chAConverter;
    }
}

int main()
{
    int letra = 122;
    char upperCaseLetter = toUpper(letra);
    printf("\nIntroduza a letra que quer converter em maiuscula: " );
    // scanf(" %c", &letra);
    if(letra !=  upperCaseLetter)
    {
        printf("A maiuscula de %c e %c\n",letra, upperCaseLetter);
    }
    else
    {
        printf("O carater %c nao e convertivel em maiusculo.\n\n",letra );
    }
    return 0;
}

