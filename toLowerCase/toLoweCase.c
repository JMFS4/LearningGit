#include<stdio.h>
/// @brief 
///  um programa que implemente uma calculadora com operações entre inteiros, isto é, 
/// que perante 2 inteiros lido do teclado e um operador (+, -, *, /,%) devolva o resultado da operação;
/// @return 
int main()
{
   char a = 'a';
   int b = a;
       printf("Character to asci number %d \n", a);

//    scanf("Insert an character %c", a);

   if((int)a <= 122 && (int)a >= 97) {
    printf("successsss");
   } else {
    printf("fail");
   }

    return 1;
}
