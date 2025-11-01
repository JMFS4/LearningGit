/* 
Usando o operador sizeof(), calcule o espaço em memória ocupado pela estrutura que usou no exercício 
anterior e a média de cada célula do array; 
*/

#include<stdio.h>
#define nrTrabalhadores 5
int salarios[nrTrabalhadores] = {1300, 1000, 950, 2050, 1150};

int main()
{
   printf("O tamanho, em bytes, do array salarios e %d", sizeof(salarios));
   printf("\nCada celula ou posicao do array ocupa %d bytes", sizeof(salarios[0]));

}
