#include <stdio.h>
#include <ctype.h>

#define VENENO 0.02
#define ARMADURA 0.05

void simulaJogo(float *vida, float valor, char acao);
void menu();

int main()
{
    float vida, valor;
    char acao;

    printf("Insira a vida inicial: \n");
    scanf("%f", &vida);

    do
    {
        menu();

        printf("Escolha uma acao: \n");
        scanf(" %c", &acao);

        acao = toupper(acao);

        if (acao == 'C' || acao == 'D')
        {
            printf("Digite o valor: \n");
            scanf("%f", &valor);
        }

        simulaJogo(&vida, valor, acao);

        if (acao != 'S')
        {
            printf("Vida atual: %.2f\n\n", vida);
        }

    } while (acao != 'S');

    printf("Vida final: %.2f\n", vida);
    printf("Jogo encerrado!\n");

    return 0;
}

void menu()
{
    printf("--- MENU ---\n");
    printf("C - cura\n");
    printf("D - dano\n");
    printf("B - bonus de armadura\n");
    printf("V - veneno\n");
    printf("S - sair\n");
}

void simulaJogo(float *vida, float valor, char acao)
{

    if (acao != 'S')
    {
        if (acao == 'C')
        {
            *vida += valor;
        }
        else if (acao == 'D')
        {
            *vida -= valor;
        }
        else if (acao == 'B')
        {
            *vida = *vida + (*vida * ARMADURA);
        }
        else if (acao == 'V')
        {
            *vida = *vida - (*vida * VENENO);
        }
        else
        {
            printf("Acao invalida!\n");
        }
    }
}