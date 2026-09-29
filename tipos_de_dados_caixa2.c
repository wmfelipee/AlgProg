#include <stdio.h>

#define NOTA_100 100
#define NOTA_50 50
#define NOTA_20 20
#define NOTA_10 10
#define NOTA_5 5
#define NOTA_2 2
#define NOTA_1 1

#define MOEDA_50 0.50
#define MOEDA_25 0.25
#define MOEDA_10 0.10
#define MOEDA_5 0.05
#define MOEDA_1 0.01

int main(){
    float valor;
    
    int qtdetotalnotas = 0;
    int qtde_nota100 = 0;
    int qtde_nota50 = 0;
    int qtde_nota20 = 0;
    int qtde_nota10 = 0;
    int qtde_nota5 = 0;
    int qtde_nota2 = 0;
    int qtde_nota1 = 0;

    int qtdetotalmoedas = 0;
    int qtde_moeda50 = 0;
    int qtde_moeda25 = 0;
    int qtde_moeda10 = 0;
    int qtde_moeda5 = 0;
    int qtde_moeda1 = 0;

        do{
        printf("Qual o valor a ser devolvido?\n");
        scanf("%f", &valor);

            if (valor <= 0){
            printf("Valor invalido!\n");
            }
        }
        while(valor <= 0);

        //Contagem de notas

        while(valor >= NOTA_100){
            qtdetotalnotas++;
            qtde_nota100++;
            valor -= NOTA_100;
        }

        while(valor >= NOTA_50){
            qtdetotalnotas++;
            qtde_nota50++;
            valor -= NOTA_50;
        }

        while(valor >= NOTA_20){
            qtdetotalnotas++;
            qtde_nota20++;
            valor -= NOTA_20;
        }

        while(valor >= NOTA_10){
            qtdetotalnotas++;
            qtde_nota10++;
            valor -= NOTA_10;
        }

        while(valor >= NOTA_5){
            qtdetotalnotas++;
            qtde_nota5++;
            valor -= NOTA_5;
        }

        while(valor >= NOTA_2){
            qtdetotalnotas++;
            qtde_nota2++;
            valor -= NOTA_2;
        }

        while(valor >= NOTA_1){
            qtdetotalnotas++;
            qtde_nota1++;
            valor -= NOTA_1;
        }

        // A partir daqui, serao contadas as moedas

        while(valor >= MOEDA_50){
            qtdetotalmoedas++;
            qtde_moeda50++;
            valor -= MOEDA_50;
        }

        while(valor >= MOEDA_25){
            qtdetotalmoedas++;
            qtde_moeda25++;
            valor -= MOEDA_25;
        }

        while(valor >= MOEDA_10){
            qtdetotalmoedas++;
            qtde_moeda10++;
            valor -= MOEDA_10;
        }

        while(valor >= MOEDA_5){
            qtdetotalmoedas++;
            qtde_moeda5++;
            valor -= MOEDA_5;
        }

        while(valor >= MOEDA_1){
            qtdetotalmoedas++;
            qtde_moeda1++;
            valor -= MOEDA_1;
        }

        printf("Quantidade total de notas: %d\n", qtdetotalnotas);
        printf("Quantidade de notas de 100: %d\n", qtde_nota100);
        printf("Quantidade de notas de 50: %d\n", qtde_nota50);
        printf("Quantidade de notas de 20: %d\n", qtde_nota20);
        printf("Quantidade de notas de 10: %d\n", qtde_nota10);
        printf("Quantidade de notas de 5: %d\n", qtde_nota5);
        printf("Quantidade de notas de 2: %d\n", qtde_nota2);
        printf("Quantidade de moedas de 1: %d\n", qtde_nota1);
        
        printf(" \n");

        printf("Quantidade total de moedas: %d\n", qtdetotalmoedas);
        printf("Quantidade de moedas de 50 cents: %d\n", qtde_moeda50);
        printf("Quantidade de moedas de 25 cents: %d\n", qtde_moeda25);
        printf("Quantidade de moedas de 10 cents: %d\n", qtde_moeda10);
        printf("Quantidade de moedas de 5 cents: %d\n", qtde_moeda5);
        printf("Quantidade de moedas de 1 cent: %d\n", qtde_moeda1);

        return 0;
    
}