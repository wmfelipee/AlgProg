#include <stdio.h>

void calcula_consumo(float km, float litros);

int main() {
    float dist, l, consumo;

    printf("Insira a distancia (km): \n");
    scanf("%f", &dist);

    printf("Insira a quantidade de litros consumida: \n");
    scanf("%f", &l);

    calcula_consumo(dist, l);

    return 0;
}

void calcula_consumo(float km, float litros) {
    float consumo;
    
    consumo = km / litros;

    printf("media: %.2f", consumo);
    if(consumo < 8) {
        printf("\nVenda o carro!\n");
    } else if(consumo >= 8 && consumo <= 14) {
        printf("\nCarro economico!\n");
    } else if(consumo > 14) {
        printf("\nCarro super economico!\n");
    }

}