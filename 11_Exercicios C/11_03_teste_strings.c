/*Como garantir que uma string é apenas constituída por dígitos? E por letras vogais? E por minúsculas?*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void verificaDigitos()
{
   char input[50];

    printf("Introduza um número: ");
    fgets(input, sizeof(input), stdin);
  
    input[strcspn(input, "\n")] =  '\0';

    // verificar se só contém dígitos
    if (strspn(input, "0123456789") == strlen(input))
    {
        printf("A string contem apenas dígitos.\n");
    } else 
    {
        printf("A string contém outros caracteres.\n");
    }
}
void verificaVogais()
{  
   char input[50];

    printf("Introduza texto apenas com vogais: ");
    fgets(input, sizeof(input), stdin);

   input[strcspn(input, "\n")] =  '\0';

    // verificar se só contém vogais
    if (strspn(input, "aeiou") == strlen(input))
    {
        printf("A string contem apenas vogais.\n");
    } else 
    {
        printf("A string contém outros caracteres.\n");
    }
}
int main(void) 
{
     verificaDigitos();
     verificaVogais();
}
