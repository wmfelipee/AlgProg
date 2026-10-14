#include <stdio.h>

int main(){
    float x, y;

    printf("Qual o valor de x?\n");
    scanf("%f", &x);

    printf("Qual o valor de y?\n");
    scanf("%f", &y);

    if(x >= 0){
        if(y > 0 && x > 0){
            printf("O ponto esta localizado no quadrante 1!\n");
        }

        if(y < 0 && x > 0){
            printf("O ponto esta localizado no quadrante 4!\n");
        }

        if(y == 0 && x == 0){
            printf("O ponto esta localizado na origem!\n");
        }

        if(x == 0 && (y > 0 || y < 0)){
            printf("O ponto esta localizado no eixo y!\n");
        }

        if(y == 0 && x > 0){
            printf("O ponto esta localizado no eixo x!\n");
        }
    }

    if(x < 0){
        if(y > 0){
            printf("O ponto esta localizado no quadrante 2!\n");
        }\

        if(y < 0){
            printf("O ponto esta localizado no quadrante 3!\n");
        }

        if(y == 0){
            printf("O ponto esta localizado no eixo x!\n");
        }
    }

    return 0;
}