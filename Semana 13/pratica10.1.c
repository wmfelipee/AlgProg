#include <stdio.h>

#define HORA 3600
#define MINUTO 60
#define SEGUNDO 1
void tempo(int seg, int *h, int *min, int *s);

int main()
{
    int seg, h, min, s;

    printf("Digite a quantidade de segundos: \n");
    scanf("%d", &seg);

    tempo(seg, &h, &min, &s);

    printf("Horas: %d \nMinutos: %d \nSegundos: %d \n", h, min, s);

    return 0;
}

void tempo(int seg, int *h, int *min, int *s)
{
    *h = seg / 3600;
    seg = seg % 3600;

    *min = seg / 60;
    seg = seg % 60;

    *s = seg;
}