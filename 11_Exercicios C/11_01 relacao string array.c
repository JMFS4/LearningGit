/*
Crie um aplicativo que reduza  a string "Bom Dia Licenciatura em Engenharia de Sistemas Informaticos"
 a metade, a um quarto e a nada e posteriormente, pelos mesmos passos, recupere a string inicial

*/

#include <stdio.h>
#include <string.h>


#define tamanhoTexto 60
char nome[tamanhoTexto] = "Bom Dia Licenciatura em Engenharia de Sistemas Informaticos";
void cortaTexto() 
{
    printf("\nA string:\"%s\" tem tamanho: %zu", nome, strlen(nome));

    nome[tamanhoTexto/2] = '\0';
    printf("\nA string: \"%s\" tem tamanho: %zu", nome, strlen(nome));
    
    nome[tamanhoTexto/4] = '\0';
    printf("\nA string: \"%s\" tem tamanho: %zu", nome, strlen(nome));

    nome[1] = '\0';
    printf("\nA string: \"%s\" tem tamanho: %zu", nome, strlen(nome));
    
    nome[0] = '\0';
    printf("\nA string: \"%s\" tem tamanho: %zu\n", nome, strlen(nome));

    for (int i = 0 ; i < tamanhoTexto ; i ++) /// mostrar o real conteúdo do array acima declarado e inicializado.
        putchar(nome[i]);


}
void repoeTexto()
{
    /// função que repoe de forma gradual, o conteúdo da string e exibe, também de forma gradual o seu conteúdo
    
    printf("\nA string:\"%s\" tem tamanho: %zu", nome, strlen(nome));
    nome[0] = 'B';
    printf("\nA string: \"%s\" tem tamanho: %zu\n", nome, strlen(nome));
    nome[1] = 'o';
    printf("\nA string: \"%s\" tem tamanho: %zu", nome, strlen(nome));
    nome[tamanhoTexto/4] = 'a';
    printf("\nA string: \"%s\" tem tamanho: %zu", nome, strlen(nome));
    nome[tamanhoTexto/2] = 'a';
    printf("\nA string: \"%s\" tem tamanho: %zu", nome, strlen(nome));
}

int main( )
{
    cortaTexto();
    repoeTexto();
    return 0;

}
