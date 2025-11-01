/* 
programa que considere 5 valores inteiros: 1300, 1000, 950, 2050, 1150 , correspondendo a 5 salários de uma PME 
e calcule a sua soma (despesa com salários da PME) e a sua média;
*/

#include<stdio.h>
//static const int nrTrabalhadores = 5;
enum { nrTrabalhadores = 5 };
int salarios[nrTrabalhadores] = {1300, 1000, 950, 2050, 1150};
/// @brief função que calcula a soma dos salários de uma empresa 
/// @return a soma dos salarios usando valores de array declarado como variável global
int somaSalarios()
{ 
    int soma= 0;
    for(int i = 0;  i < nrTrabalhadores; i ++ ) {
        soma += salarios[i];
    }

    return soma;
     
}

double mediaSalario(int salario)
{ 
    return salario / (sizeof(salarios) / sizeof(salarios[0]));
     
}

int main()
{
    const int soma = somaSalarios();
    const double mediaSoma = mediaSalario(soma);
    printf("\n");
    printf("Numero de salários %zu \n", (sizeof(salarios) / sizeof(salarios[0])));
    printf(" A soma dos salarios da PME e %d \n", soma);
    printf(" A media dos salarios da PME e %.2f \n", mediaSoma);

}
