/*2. (3pts) Escreva um programa que leia a idade de uma pessoa e informe a sua classe eleitoral, conforme abaixo:
 Não eleitor (abaixo de 16 anos);
 Eleitor obrigatório (entre a faixa de 18 e 69 anos);
 Eleitor facultativo (de 16 até 17 anos e 70 anos ou mais).*/

#include <stdio.h>

int main(){
    int idade;

    // Solicita a idade do usuario
    printf("Informe a sua idade:\n");
    scanf("%d", &idade);

    // Faz as verificacoes
    if(idade < 16){
        printf("Nao eleitor.\n");
    }

    else if(idade >= 18 && idade <= 69){
        printf("Eleitor obrigatorio.\n");
    }

    else if(idade < 18 || idade >= 70){
        printf("Eleitor facultativo.\n");
    }

    return 0;
}