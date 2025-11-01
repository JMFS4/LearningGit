#include <stdio.h>
#include <limits.h>

int main() {
    printf("=== short ===\n");
    printf("Tamanho: %zu bytes\n", sizeof(short));
    printf("Minimo: %d\n", SHRT_MIN);
    printf("Maximo: %d\n", SHRT_MAX);
    printf("Maximo unsigned short: %u\n\n", USHRT_MAX);

    printf("=== int ===\n");
    printf("Tamanho: %zu bytes\n", sizeof(int));
    printf("Minimo: %d\n", INT_MIN);
    printf("Maximo: %d\n", INT_MAX);
    printf("Maximo unsigned int: %u\n\n", UINT_MAX);

    printf("=== long ===\n");
    printf("Tamanho: %zu bytes\n", sizeof(long));
    printf("Minimo: %ld\n", LONG_MIN);
    printf("Maximo: %ld\n", LONG_MAX);
    printf("Maximo unsigned long: %lu\n\n", ULONG_MAX);

    printf("=== long long ===\n");
    printf("Tamanho: %zu bytes\n", sizeof(long long));
    printf("Minimo: %lld\n", LLONG_MIN);
    printf("Maximo: %lld\n", LLONG_MAX);
    printf("Maximo unsigned long long: %llu\n\n", ULLONG_MAX);

    return 0;
}
