/*
Crie um aplicativo com o seguinte menu:
0 – colocar valor adequado nas duas strings str1 e str2
1 – verificar a copia de string´s;
2 – verificar copia de n carateres;
3 – verificar concatenação;
4 – verificar concatenação de n carateres apenas;
5 – verificar procura de carater em string;
6 – validar procura de carater em string limitada a n carateres;
7 – Comparar as duas strings 
8 – Comparar as duas strings  limitada a n carateres;

*/

#include<stdio.h>
#include<string.h>
char str1[100]="", str2[100]="";
void apresentaMenu()
{
    printf("0 - colocar valor adequado nas duas strings str1 e str2\n");
    printf("1 - verificar a copia de string´s\n");
    printf("2 - verificar copia de n carateres\n");
    printf("3 - verificar concatenação\n");
    printf("4 - verificar concatenação de n carateres apenas\n");
    printf("5 - verificar procura de carater em string\n");
    printf("6 - validar procura de carater em string limitada a n carateres\n");
    printf("7 - Comparar as duas strings\n");
    printf("8 - Comparar as duas strings  limitada a n carateres\n");
    printf("9 - SAIR \n");
}
int main(int argc, char const *argv[])
    {   
    do
    {
        apresentaMenu();
        switch(getchar())
        {
            case '0':
                strcpy(str1, "Sou a primeira string. Ola.");
                strcpy(str2, "Sou a segunda string. Ola.");
                break;
            case '1':
            // copiar string´s
                printf("\nPrimeira String:%s", str1);
                printf("\Segunda String:%s", str1);
            
            


        }
    }

 
    
     while (1)
}

