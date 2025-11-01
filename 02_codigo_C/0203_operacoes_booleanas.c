#include<stdio.h>
int main(void) {
    int a = -5, b = -10;

    if (a < 0 && b < 0) {
        printf("Ambos são negativos\n");
    }

    printf("%d\n", a < b && b < 20); // imprime 0 (false)
    printf("%d\n", a > b && b < 20); // imprime 1 (true)
    
/* Alter o codigo para valores negativos*/
    return 0;
}
