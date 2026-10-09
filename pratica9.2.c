#include <stdio.h>

void menu();
int qtde(int n);
int soma(int n);
float media(int n);

int main()
{
    int opcao, nro;

    do
    {
        do
        {
            menu();
            scanf("%d", &opcao);
        } while (opcao < 0 || opcao > 3);

        if (opcao != 0)
        {
            printf("\nDigite um numero inteiro positivo: ");
            scanf("%d", &nro);

            if (opcao == 1)
            {
                printf("\nQuantidade de digitos: %d\n", qtde(nro));
            }
            else if (opcao == 2)
            {
                printf("\nSoma: %d\n", soma(nro));
            }
            else
            {
                printf("\nMedia: %.2f\n", media(nro));
            }
        }
    } while (opcao != 0);

    return 0;
}

void menu()
{
    int op;
    printf("1 - Contar a quantidade de digitos \n2 - Calcular a soma dos digitos \n3 - Calcular a media dos digitos \n0 - Sair\n");
}

int qtde(int n)
{
    int i = 0;
    while (n > 0)
    {
        n = n / 10;
        i++;
    }

    return i;
}

int soma(int n)
{
    int i = 0;

    while (n > 0)
    {
        i += n % 10;
        n = n / 10;
    }

    return i;
}

float media(int n)
{
    float i = 0;

    i = soma(n) / (float)qtde(n);

    return i;
}