#include <stdio.h>

#define SFAMILIA 67.54
int main(){
    int horas, filhos;
    float salario, valorh;

    printf("Insira o numero de horas trabalhadas:\n");
    scanf("%d", &horas);

    printf("Insira o valor recebido por hora:\n");
    scanf("%f", &valorh);

    printf("Insira o numero de filhos:\n");
    scanf("%d", &filhos);

    salario = (horas * valorh) + (SFAMILIA * filhos);

    printf("O salario bruto eh de R$ %1.2f!\n", salario);

    return 0;
}