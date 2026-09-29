#include <stdio.h>
#include <math.h>

int main() {
    int i, raio;
    float result;

    printf("Qual a operacao desejada(1- area; 2- perimetro)?\n");
    scanf("%d", &i);

    printf("Qual o raio da circunferencia?\n");
    scanf("%d", &raio);

    if (i == 1) {
        result = pow(raio, 2) * 3.14;
        printf("A area do circulo eh: %1.2f", result);
    } else if (i == 2) {
        result == 2 * 3.14 * raio;
        printf("O perimetro da circunferencia eh: %1.2f", result);
    }

    return 0;
}