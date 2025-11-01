/*
Crie em C um programa que leia 6 valores reais para  um array, correspondendo a 6 preços de um produto 
em 6 espaços comerciais diferentes e encontre  o maior preço e a menor.
Reparta o seu esforço por vários funções 
*/
#include<stdio.h>

#define nrPrecos 6
float precos[nrPrecos];
void lerPrecos()
{
    for(int i = 0 ; i <nrPrecos; i++ )
    {
        printf("\n Introduza o preco do produto no espaco %d :", i +1);
        scanf("%f", &precos[i]);
    }
    printf("Obrigado.");

}
int indiceMenorPreco()
{ 
    int indiceMenorPreco=0; /// Porquê?
    for(int i = 1 ; i < nrPrecos; i++)
       //// ???
    return indiceMenorPreco; 
}
int indiceMaiorPreco()
{
    int indiceMaiorPreco=0; /// Porquê?
    for(int i = 1 ; i < nrPrecos; i++)
        ///
    return indiceMaiorPreco;
; 
}
int main( )
{
    lerPrecos();
    printf(" O menor preco e o do espaco %d, no valor de %.2f", indiceMenorPreco()+1, precos[indiceMenorPreco()]);
    printf("\n O MAIOR preco e o do espaco %d, no valor de %.2f", indiceMaiorPreco()+1, precos[indiceMaiorPreco()]);
    /// Econtrar outra resolução, mais eficaz mas nemos otimizada em termos de código
    return 0;
}
