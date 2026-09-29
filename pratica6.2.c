#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MIN 1
#define MAX 10
#define INTEIROS 20

int main()
{
    int nro[INTEIROS] = {0}, cont, cont2, nfreq = 1, freq = 0, soma = 0;
    float media = 0;

    srand(time(NULL));

    for (cont = 0; cont < INTEIROS; cont++)
    {
        nro[cont] = MIN + (rand() % (MAX - MIN + 1));
    }

    printf("Vetor gerado:\n");

    for (cont = 0; cont < INTEIROS; cont++)
    {
        printf("%d ", nro[cont]);
    }

    printf("\nFrequencia absoluta:\n");

    for (cont = 1; cont <= MAX; cont++)
    {
        for (cont2 = 0; cont2 < INTEIROS; cont2++)
        {
            if (nfreq == nro[cont2])
            {
                freq++;
            }
        }
        printf("Numero %d: %d vez(es)\n", nfreq, freq);
        nfreq++;
        freq = 0;
    }

    for (cont = 0; cont < INTEIROS; cont++)
    {
        soma += nro[cont];
    }

    media = soma / (float)INTEIROS;

    printf("Media: %.2f\n", media);

    printf("Numeros maiores que a media:\n");
    for (cont = 0; cont < INTEIROS; cont++)
    {
        if (nro[cont] > media)
        {
            printf("%d ", nro[cont]);
        }
    }

    return 0;
}