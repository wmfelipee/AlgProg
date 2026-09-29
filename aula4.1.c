/*1. (5pts) Faça um programa que leia um valor inteiro N ≥ 0 do teclado. Após, o programa deve calcular e imprimir
na tela os valores de
S1 = 0 + 2 + 4 + 6 +...+M
S2 = 02 + 22 − 42 + 62 −...±M2
onde M é o “maior nú mero par menor ou igual a N”.*/
#include <stdio.h>
#include <math.h>

int main() {
    unsigned int n, s1 = 0;
    int s2 = 0, contador1, contador2, sinal = 0;

    //Solicita ao user o valor
    printf("Insira o valor de N desejado:\n");
    scanf("%u", &n);

    //Verifica se o valor e par, se nao for arredonda pro menor par mais prox
    if(n % 2 != 0){
        n--;
    }

    //Faz o somatorio 1
    for(contador1 = 0; contador1 <= n; contador1 += 2){
        s1 += contador1;
    }

    //Imprime
    printf("Valor de S1: %u\n", s1);
    
    //Faz o somatorio 2
    for(contador2 = 0; contador2 <= n; contador2 += 2){
        if(sinal % 2 == 0){
            s2 -= pow(contador2,2);
        }
       
        else if(sinal % 2 != 0 ){
            s2 += pow(contador2,2);
        }
        
        sinal++;
    }
    
    //Imprime
    printf("Valor de S2: %d\n", s2);

    return 0;
}