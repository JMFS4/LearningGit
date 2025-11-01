#include <stdio.h>
/// @brief usando um procedimento ( função que não retorna valor), rescreva este código C 
/// para obter um programa que enquanto o utilizador desejar crie uma árvore com um caracter à sua escolha.
/// @return não retorna valor

void controiArvore(int altura, char symbol){
for(int i = 0; i < altura; i++)
    {
        for(int espacos =1 ; espacos <=(altura-i); espacos++)
        {
            printf(" ");
        }
        for(int estrelas = 0 ; estrelas <(2*i)+1; estrelas++)
        {
            printf("%c", symbol);
        } 
        
        printf("\n");
    }
}

    
// }
int main() {
    int numberOfTrees;
    int altura;
    char symbol = '%';
    printf("Introduza o valor da altura que pretende para a arvore de Natal:");
    scanf("%d", &altura);
    printf("\n");
    printf("Introduza o numeros de arvores");
    scanf("%d", &numberOfTrees);


    printf("\n\n");
    for (int i = 0; i < numberOfTrees; i++)
    {
        /* code */
        controiArvore(altura, symbol);
    }
    
    printf("\n");
    return 0;
}
