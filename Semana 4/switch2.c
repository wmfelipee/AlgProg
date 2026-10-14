#include <stdio.h>

#define OVOA 12
#define OVOB 15.5
#define OVOC 21.3

int main(){
    char tipo;
    int qtde;
    float valor = 0;

    printf("Qual o tipo de ovo e a quantidade do pedido?\n");
    scanf(" %c %d", &tipo, &qtde);

    if(tipo == 'A' || tipo == 'a'){
        if(qtde <= 50){
        valor = qtde * OVOA;
        }
        else{
            valor = 50 * OVOA;
            printf("A quantidade excedeu o limite(50)!\n");
        }
    }
    if(tipo == 'B' || tipo == 'b'){
        if(qtde <= 30){
        valor = qtde * OVOB;
        }
        else{
            valor = 30 * OVOB;
            printf("A quantidade excedeu o limite(30)!\n");
        }

    }
    
    if(tipo == 'C' || tipo == 'c'){
        if(qtde <= 20){
        valor = qtde * OVOC;
        }
        else{
            valor = 20 * OVOC;
            printf("A quantidade excedeu o limite(20)!\n");
        }
    }

    switch(tipo){
        case 'a':
        case 'A':
            printf("O valor dos ovos de tipo A eh de R$ %1.2f\n", valor);
            break;
        case 'b':
        case 'B':
            printf("O valor dos ovos de tipo B eh de R$ %1.2f\n", valor);
            break;
        case 'c':
        case 'C':
            printf("O valor dos ovos de tipo C eh de R$ %1.2f\n", valor);
            break;
        default:
            printf("Tipo invalido!");
    }
    
    return 0;
}