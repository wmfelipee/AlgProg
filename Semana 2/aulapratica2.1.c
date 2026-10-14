/*1. (3pts) Um usuário deseja comprar um item de valor V, mas atualmente tem apenas S reais economizados. Ele
decide economizar um valor D por mês. Implemente um programa que calcule o tempo, em meses, necessário
para que o valor economizado alcance V. Considere que o nú mero de meses pode ser fracionário */

#include <stdio.h>

int main(){
    // Variaveis
    int valor, saldo, mensal;
    float tempo = 0;

    // Solicita ao usuario as informacoes
    printf("Qual o seu saldo atual (S)?\n");
    scanf("%d", &saldo);

    printf("Qual o valor do item que voce deseja comprar (V)?\n");
    scanf("%d", &valor);

    printf("Quanto voce decidiu economizar por mes? (D)\n");
    scanf("%d", &mensal);

    // Calcula
    tempo = (float)(valor - saldo) / mensal;

    // Imprime
    printf("O tempo necessario eh de %1.2f meses.\n", tempo);

    return 0;
}