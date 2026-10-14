#include <stdio.h>

#define LINHA 4
#define COLUNA 4

int main() {
    int mat[LINHA][COLUNA], i, j, soma, diagonal = 0;

    for(i = 0; i < LINHA; i++) {
        for(j = 0; j < COLUNA; j++) {
            printf("Elemento (%d, %d): \n", i, j);
            scanf("%d", &mat[i][j]);
        }
    }


    for(i = 0; i < LINHA; i++) {
        soma = 0;
        for(j = 0; j < COLUNA; j++) {
            soma += mat[i][j];
        }
        printf("Soma da linha %d: %d\n", i, soma);
    }

    for(i = 0; i < LINHA; i++) {
        for(j = 0; j < COLUNA; j++){
            if(i == j){
                diagonal += mat[i][j];
            }
        }
    }
    printf("Soma da diagonal principal: %d\n", diagonal);


    printf("Matriz resultante:\n");
    for(i = 0; i < LINHA; i++){
        for(j = 0; j < COLUNA; j++){
            if(mat[i][j] > 10){
                mat[i][j] = 10;
            }
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
