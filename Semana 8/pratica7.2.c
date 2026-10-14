#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHA 4
#define COLUNA 4
#define PROF 3
#define MIN 0
#define MAX 255

int main() {
    int pixel[LINHA][COLUNA][PROF], img[LINHA][COLUNA], i, j, k, maisBrilho, linha, coluna, somaRGB;
    float somaR = 0, somaG = 0, somaB = 0;

    srand(time(NULL));

    printf("Imagem RGB:\n");
    for(i = 0; i < LINHA; i++) {
        for(j = 0; j < COLUNA; j++){
            printf("(");
            for(k = 0; k < PROF; k++){
                pixel[i][j][k] = MIN + (rand() % (MAX - MIN + 1));
                printf(" %3d", pixel[i][j][k]);
            }
            printf(")   ");
        }
        printf("\n");
    }


    for(i = 0; i < LINHA; i++) {
        for(j = 0; j < COLUNA; j++){
            somaR +=pixel[i][j][0];
                
            somaG += pixel[i][j][1];

            somaB += pixel[i][j][2];
        }

    }
    printf("Media do canal R: %.2f\n", somaR / 16);
    printf("Media do canal G: %.2f\n", somaG / 16);
    printf("Media do canal B: %.2f\n", somaB / 16);

    for(i = 0; i < LINHA; i++){
        maisBrilho = 0;       
        for(j = 0; j < COLUNA; j++){
            if(maisBrilho < (pixel[i][j][0] + pixel[i][j][1] + pixel[i][j][2])) {
                maisBrilho = pixel[i][j][0] + pixel[i][j][1] + pixel[i][j][2];

                linha = i;
                coluna = j;
            }
        }
    }
    printf("Pixel mais brilhante: linha %d, coluna %d\n", linha, coluna);
    printf("Soma R+G+B: %d\n", maisBrilho);

    printf("Imagem em escala de cinza:\n");
    for(i = 0; i < LINHA; i++) {
        for(j = 0; j < COLUNA; j++){
            img[i][j] = (pixel[i][j][0] + pixel[i][j][1] + pixel[i][j][2]) / 3;
            printf("%4d", img[i][j]);
        }
        printf("\n");
    }

    return 0;
}
