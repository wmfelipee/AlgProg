#include <stdio.h>

int main() {
    unsigned int numero, fatorial = 1;
    int i;

    printf("Informe um numero positivo:\n");
    scanf("%u", &numero);

    for (i = 1; i <= numero; i++) {
        fatorial *= i;
        printf("o valor da fatorial de %u eh %u\n", i, fatorial);
    }

    return 0;
}