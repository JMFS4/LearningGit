/*Teste a quebra de segurança que pode representar a função gets(), 
declarando uma string de tamanho 5 e usando-a para ler um nome de tamanho 10. 
Verifique o comportamento de fgets em circunstâncias idênticas.
*/

#include <stdio.h>
#include<string.h>

void usandoGets()
{
    char nome[10];
    printf("Digite o seu nome (gets tamanho 10): ");
   // gets(//????);   // lê o texto introduzido a partir do ecran até ao \n.
    printf("Ola [%s]", nome);
}
void  usandoFGets()
{
    char nome[10];
    printf("Digite o seu nome(fgets tamanho 10): ");
    fgets(nome, 10, stdin);   // lê o texto introduzido a partir do ecran até ao \n.
   // nome[strlen(nome) - 1]= '\0';
    nome[strcspn(nome, "\n")] = '\0';
    printf("Ola [%s]", nome);
}

int main(void)
 {
      
    usandoGets();
    printf("\n");
    usandoFGets();
}
