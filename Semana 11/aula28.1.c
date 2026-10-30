#include <stdio.h>

void diagonal0(int linha, int coluna, int mat[linha][coluna]);

int main()
{
    int linha, coluna, i, j;

    printf("Digite o numero de linhas da matriz (entre 2 e 5): \n");
    scanf("%d", &linha);

    printf("Digite o numero de colunas da matriz (entre 2 e 5): \n");
    scanf("%d", &coluna);

    int mat[linha][coluna];

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            scanf("%d", &mat[i][j]);
            printf("\t");
        }
        printf("\n");
    }

    printf("Matriz original:\n");
    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }

    diagonal0(linha, coluna, mat);

    return 0;
}

void diagonal0(int linha, int coluna, int mat[linha][coluna])
{
    int i, j;

    printf("\nMatriz modificada:\n");

    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            if (i == j)
            {
                mat[i][j] = 0;
            }
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }
}