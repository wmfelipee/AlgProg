#include <stdio.h>

#define TAM 5

typedef struct Inscricao
{
    int numero;
    int idade;
    char categoria;
} Inscricao;

void escreverArq(Inscricao inscricao[], FILE *arq, int n);

int main()
{
    FILE *arquivo;
    arquivo = fopen("inscricoes.bin", "wb");

    Inscricao inscricao[TAM];
    int i, n = 0;
    for (i = 0; i < TAM - 2; i++)
    {
        printf("Insira o numero da inscricao %d: ", i + 1);
        scanf("%d", &inscricao[i].numero);
        printf("Insira a idade da inscricao %d: ", i + 1);
        scanf("%d", &inscricao[i].idade);
        printf("Insira a categoria da inscricao %d: ", i + 1);
        scanf(" %c", &inscricao[i].categoria);
        fwrite(&inscricao, sizeof(Inscricao), 1, arquivo);
        printf("\n");
        n++;
    }

    fclose(arquivo);

    arquivo = fopen("inscricoes.bin", "rb");

    escreverArq(inscricao, arquivo, n);

    fclose(arquivo);

    arquivo = fopen("inscricoes.bin", "ab");

    for (i = 3; i < TAM; i++)
    {
        printf("Insira o numero da inscricao %d: ", i + 1);
        scanf("%d", &inscricao[i].numero);
        printf("Insira a idade da inscricao %d: ", i + 1);
        scanf("%d", &inscricao[i].idade);
        printf("Insira a categoria da inscricao %d: ", i + 1);
        scanf(" %c", &inscricao[i].categoria);
        fwrite(&inscricao, sizeof(Inscricao), 1, arquivo);
        printf("\n");
        n++;
    }

    escreverArq(inscricao, arquivo, n);

    return 0;
}

void escreverArq(Inscricao inscricao[], FILE *arq, int n)
{
    int i, e = 0, p = 0, g = 0, soma = 0;
    float media = 0;

    printf("-----------------------------------------\n");
    printf("NUMERO\t\tIDADE\t\tCATEGORIA\n");
    printf("-----------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        fread(inscricao, sizeof(Inscricao), 1, arq);
        printf("%d\t\t%d\t\t%c", inscricao[i].numero, inscricao[i].idade, inscricao[i].categoria);
        printf("\n");

        if (inscricao[i].categoria == 'E')
        {
            e++;
        }
        else if (inscricao[i].categoria == 'P')
        {
            p++;
        }
        else if (inscricao[i].categoria == 'G')
        {
            g++;
        }

        soma += inscricao[i].idade;
    }
    printf("\n");
    printf("-----------------------------------------\n");

    media = (float)soma / n;

    printf("Total de inscricoes: %d\n", n);
    printf("Estudantes: %d\n", e);
    printf("Professores: %d\n", p);
    printf("Publico geral: %d\n", g);
    printf("Idade media: %.2f\n", media);
}