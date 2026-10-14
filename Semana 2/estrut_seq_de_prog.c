// Programa que fornece a soma e o prod de 3 valores fornecidos pelo usuario 

#include <stdio.h>

int main(){
    
    // nomeia as variaveis
    int n1, n2, n3;
    int soma, prod;

    // Solicita ao usuario cada um dos valores necessarios para as operacoes
    printf("Digite o primeiro valor!\n");
    scanf("%d", &n1);
    
    printf("Digite o segundo valor!\n");
    scanf("%d", &n2);

    printf("Digite o terceiro valor!\n");
    scanf("%d", &n3);

    soma = n1 + n2 + n3;
    prod = n1 * n2 * n3;

    printf("Resultado da soma: %d\n", soma);
    printf("Resultado do produto: %d\n", prod);

    return 0;

}