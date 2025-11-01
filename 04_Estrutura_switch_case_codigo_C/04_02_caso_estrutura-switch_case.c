include<stdio.h>
/// @brief 
///  programa que perante um valor de 1 a 10, escreve o valor por extenso todos os valores até ao limite de 10;
/// @return 
int main()
{
    int valorInput;
    printf("Introduza um valor inteiro entre 1 e 10: ");
    /// ??
    switch (valorInput)
    {
    case 1:
       printf("um;");
       /// break;
    
    default:
        printf("Valor fora da gama pretendida");
        break;
    }
}
