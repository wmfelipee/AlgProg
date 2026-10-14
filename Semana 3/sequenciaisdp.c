#include <stdio.h>
#include <math.h>

int main(){
    int x1, y1, x2, y2;

    printf("Digite as coordenadas do ponto 1 (x1 y1):\n");
    scanf("%d %d", &x1, &y1);

    printf("Digite as coordenadas do ponto 2 (x2 y2):\n");
    scanf("%d %d", &x2, &y2);

    float dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A distancia entre esses pontos eh %1.2f!\n", dist);

    return 0;
}