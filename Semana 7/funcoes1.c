#include <stdio.h>

void menu_de_opcoes() {
    printf("--------\n  MENU  \n--------\n\n");
    
    printf("1 - Soma de valores reais\n");
    printf("2 - Divisores do numero\n");
    printf("3 - Sequencia de numeros pares\n");
    printf("4 - Verifica se o numero eh perfeito\n");

    printf("\nInforme a opcao desejada:\n");
}

int main() {
   int opcao, num, i, j;
   float soma = 0, val1, val2;
   menu_de_opcoes();
   scanf("%d", &opcao);

   if(opcao == 1){
    printf("Insira os valores:\n");
    scanf("%f %f", &val1, &val2);

    soma = val1 + val2;

    printf("O resultado da soma eh: %3.2f\n", soma);

   } else if(opcao == 2){
    printf("Insira o numero:\n");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
        if(num % i == 0){
            printf("%3d", i);
            printf("\n");
        }
    }
   } else if(opcao == 3){
    printf("Insira o numero:\n");
    scanf("%d", &num);

    for(i = 2; i <= num; i += 2){
        printf("%3d", i);
        printf("\n");
    }
   } else if(opcao == 4){
    printf("Insira o numero:\n");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
        if(num % i == 0){
            soma += i;
            if(soma == num){
                printf("O numero eh perfeito!\n");
                }
            }
        }
    }
}