#include <stdio.h>

int multiplicar(int a, int *b, int mult);

int main() {
    int a, b, mult;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("Digite o multiplicador: ");
    scanf("%d", &mult);
    
    printf("Antes: A = %d, B = %d\n", a, b);

    multiplicar(a, &b, mult);

    printf("Depois: A = %d, B = %d\n", a, b);

    return 0;
}

int multiplicar(int a, int *b, int mult){
    *b = *b * mult;

    a = a * mult;
}