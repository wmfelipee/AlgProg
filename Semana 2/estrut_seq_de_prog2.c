#include <stdio.h>

int main() {
    int qtde;
    float preco, precof;

    printf("Qual o valor do produto?\n");
    scanf("%f", &preco);

    printf("Qual a quantidade de itens?\n");
    scanf("%d", &qtde);

    precof = preco * qtde;

    printf("O valor da compra eh de R$ %1.2f\n", precof);

    return 0;

}