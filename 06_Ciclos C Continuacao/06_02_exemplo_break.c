#include<stdio.h>
/// @brief programa que exibe a tabuada de todos os números até um à sua escolha
/// @return 
int main( )
{
    int i,j, valorLimite;
    printf("Digite o número para o qual não quer ver a tabuada: ");
    scanf("%d", &valorLimite);
    for (i= 1; i<= 10; i++)
    {
        if (i==valorLimite )
        {
            /// ??? ;
        }
        else{
            printf("Tabuada do %d:\n", i);
           for(j=1; j<=10; j++)
           {
                printf(" %d * % d = %d\n", i, j, i*j);
           }
        }
    }
}
