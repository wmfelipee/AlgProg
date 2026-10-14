/* Escreva um algoritmo e um programa em C para:
1. Preencher um arranjo de números inteiros com 20000 valores
✓ Os valores devem ser números aleatórios entre 1000 e 100000.
✓ Utilize as funções srand() e rand()
2. Procure o maior número
✓ Informe o valor e a posição
3. Procure o menor número
✓ Informe o valor e a posição
4. Calcule o valor médio
✓ Informe o valor médio
5. Procure a posição que tem o valor mais próximo do valor médio
✓ Informe a posição */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define ARRANJO 20000
#define MAX 100000
#define MIN 1000

int main() {
    // Define as variaveis
    int nro[ARRANJO] = {0}, cont, posicao_nMax = 0, posicao_nMin = 0, posicao_media;
    long soma = 0;
    float media;

    // Define o tempo mudando a cada segundo
    srand(time(NULL));

    // laco pra que todos os nros dentro do arranjo sejam aleatorios 
    for(cont = 0; cont < ARRANJO; cont++) {
        nro[cont] = MIN + (rand() % (MAX - MIN + 1));  
    }

    // Define as variaveis apos o laco pra que elas sejam aleatorias
    int nMax = nro[0], nMin = nro[0];


    // Laco de verificacao do maior e menor nro
    for(cont = 1; cont < ARRANJO; cont++) {
        if(nro[cont] > nMax){
            nMax = nro[cont];
            posicao_nMax = cont;
        }
        else if (nro[cont] < nMin){
            nMin = nro[cont];
            posicao_nMin = cont;
        }
    }

    // Laco que soma todos os numeros
    for (cont = 0; cont < ARRANJO; cont++){
        soma += nro[cont];
    }

    // Calcula a media dos nros aleatorios
    media = soma / (float) ARRANJO;

    // Declara o nro mais prox da media
    float proxMedia = fabs(media - nro[0]);

    // Laco pra verificar qual o nro mais prox da media e a posicao do mesmo
    for(cont = 1; cont < ARRANJO; cont++){
        if(fabs(media - nro[cont]) < proxMedia){
            proxMedia = fabs(media - nro[cont]);
            posicao_media = cont;
        }
    }

    // Imprime
    printf("O maior numero eh %d e sua posicao eh %d!\n", nMax, posicao_nMax);
    printf("O menor numero eh %d e sua posicao eh %d!\n", nMin, posicao_nMin);
    printf("O valor medio eh %.2f!\n", media);
    printf("A posicao mais proxima do valor medio eh %d!\n", posicao_media);

    return 0;   
}