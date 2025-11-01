#include <stdio.h>
int main() {
 
    int a = 10, b, c;
    b=a++;
    printf("Passo1: Valor de a =%d; Valor de b=%d\n", a,b);
    b=--a;
    printf("Passo2: Valor de a =%d; Valor de b=%d\n", a,b);
    a=b=c=10;
    b*=10;
    c+=++a;
    printf("Passo3: Valor de a =%d; Valor de b=%d; Valor de c=%d\n", a,b,c);
        
    return 0;
}
