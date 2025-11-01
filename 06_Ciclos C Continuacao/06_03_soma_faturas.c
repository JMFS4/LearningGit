#include <stdio.h>

/// @brief programa que recolhe o valor de várias faturas, calcula a sua soma e a soma do seu IVA
/// @return 
int main() {
    float valorFatura;
    float soma = 0, somaIVA= 0;;

    printf("Digite o valor da primeira fatura (0 para terminar): ");
    scanf("%f", &valorFatura);

    while ((int)valorFatura != 0) {  
        /* ????  */
    }

    printf("A soma total das faturas inseridas e: %.2f\n", soma);
    printf("A soma do IVA  das faturas inseridas e: %.2f\n", somaIVA);

    return 0;
}
