/* 3. (4pts) Leia uma quantidade inteira de segundos e converta esse valor para dias, horas, minutos e segundos. */

#include <stdio.h>

int main(){
    //Variaveis
    int segundosuser;
    int saldouser;
    int dia = 0;
    int hora = 0;
    int min = 0;
    int seg = 0;

    // Solicita ao usuario as informacoes
    printf("Insira a quantidade de segundos:\n");
    scanf("%d", &segundosuser);

    // Guarda a quantidade total de segundos
    saldouser = segundosuser;

    // Calcula
    do{
        segundosuser = segundosuser - 86400;
        ++dia;
    }
    while(segundosuser > 86400);

    do{
        segundosuser = segundosuser - 3600;
        ++hora;
    }
    while(segundosuser > 3600);

    do{
        segundosuser = segundosuser - 60;
        ++min;
    }
    while(segundosuser > 60);

    do{
        segundosuser = segundosuser - 1;
        ++seg;
    }
    while(segundosuser >= 1);

    // Imprime
    printf("%d segundos correspondem a %d dias, %d horas, %d, minutos e %d segundos.\n", saldouser, dia, hora, min, seg);

    return 0;
}