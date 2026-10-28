#include <stdio.h>
#include <math.h>

void bhaskara(float a, float b, float c, float *x1, float *x2);

int main()
{
    float a, b, c, x1, x2;

    printf("Inisra o valor a: \n");
    scanf("%f", &a);

    printf("Inisra o valor b: \n");
    scanf("%f", &b);

    printf("Inisra o valor c: \n");
    scanf("%f", &c);

    bhaskara(a, b, c, &x1, &x2);

    printf("Raiz 1 = %.2f e raiz 2 = %.2f\n", x1, x2);

    return 0;
}

void bhaskara(float a, float b, float c, float *x1, float *x2)
{
    *x1 = (float)(-b + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);

    *x2 = (float)(-b - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
}