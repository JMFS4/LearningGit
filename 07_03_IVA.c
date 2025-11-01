#include<stdio.h>
/// @brief solução informática, 
/// usando funções, que calcula o valor do iva, perante o custo de um produto e a taxa de iva aplicada(6, 13 ou 23);
/// @param precoProduto 
/// @param txIVA 
/// @return 
float valorIva(float precoProduto, int txIVA)
{
   switch(txIVA)
   {
        case 6:
        case 13:
        case 23:
            return (precoProduto * txIVA) / 100;
        default:
            return -1;
    }
}
int main()
{
    float price = 20;
    float iva = 6;
    float ivaValue = valorIva(price, 6);
    float finalValue = price + ivaValue;
    printf("Valor do IVA de um produto de 20 euros é %.2f.\nO seu custo final e %.2f ", ivaValue, finalValue);
    return 0;
}
