#include<stdio.h>

/// @brief função que convert um carater na sua correspondente  minuscula
/// código ASCII das minúsculas é: 97–122;
/// código ASCII das maiúscula é: 65–90;
/// @param chAConverter - caracter a ser convertido, se isso for possível em minuscula
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



char toLower(char chAConverter )
{
 if ( chAConverter <= 90 && chAConverter >= 65)
    {
        return (char)(chAConverter + 32 );
        
    }
    else
    {
        return chAConverter;
    }
}
int main()
{
    char letra = 'A';
    char letterToLowerCase = toLower(letra);
    printf("\nIntroduza a letra que quer converter em minuscula: " );
    // scanf(" %c", &letra);
    if(letra !=  letterToLowerCase)
    {
        printf("A minuscula de %c e %c\n",letra, letterToLowerCase);
    }
    else
    {
        printf("O carater %c nao e convertivel em minusculo.\n\n",letra );
    }
    return 0;
}

