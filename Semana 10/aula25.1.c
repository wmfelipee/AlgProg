#include <stdio.h>

void imprimir(char c, int n);

int main()
{
    char c;
    int n;

    printf("Insira o caracter c: \n");
    scanf(" %c", &c);

    printf("Insira o inteiro n: \n");
    scanf("%d", &n);

    imprimir(c, n);

    return 0;
}

void imprimir(char c, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%c\t", c);
    }
}