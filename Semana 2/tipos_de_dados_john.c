#include <stdio.h>

#define PASSO 70

int main(){

    int passos1, passos2, media, tempomin, tempoh, tempo; 
    float corridakm, corridacm;

    printf("Digite a quantidade de passos do primeiro minuto: \n");
    scanf("%d", &passos1);
    passos1 = passos1 * PASSO;

    printf("Digite a quantidade de passos do ultimo minuto: \n");
    scanf("%d", &passos2);
    passos2 = passos2 * PASSO;

    media = (passos1 + passos2) / 2;

    printf("Digite as horas:\n");
    scanf("%d", &tempoh);

    tempoh = tempoh * 60;

    printf("Digite os minutos:\n");
    scanf("%d", &tempomin);

    tempo = tempoh + tempomin;

    corridacm = media * tempo;

    corridakm = corridacm / 100000;

    printf("John correu a distancia de %1.1f km!\n", corridakm);

    return 0;
}