/*1. (5pts) Implemente um programa que peça ao usuário para adivinhar um nú mero inteiro secreto entre 0 e 100.
Seu programa deverá fornecer dicas se o número fornecido pelo usuário é maior ou menor do que o número a
ser adivinhado. Caso o número seja igual ao número secreto, o programa deverá apresentar a mensagem
“Numero correto!”. Caso contrário, deverá informar “Numero secreto eh maior.” ou ”Numero secreto eh menor.”.
Após 5 tentativas, o programa deve informar ao usuário a dica adicional se o número secreto épar ou ı́mpar, além
de ser maior ou menor.
Obs.: use #define para definir um número secreto.*/

#include <stdio.h>

#define SECRETO 51

int main()
{
    int n, tentativas = 1;

    // Solicita o palpite ao user
    printf("Tente adivinhar um numero entre 0 e 100!\n");
    printf("Digite seu palpite: ");
    scanf("%d", &n);

    // Verifica se o palpite foi correto
    if (n == SECRETO)
    {
        printf("Numero correto!\n");
    }

    // Verifica se o palpite é incorreto
    if (n != SECRETO)
    {
        // Fica perguntando ao user ate que ele acerte
        do
        {
            if (n > SECRETO)
            {
                printf("Numero secreto eh menor!\n");
            }

            else if (n < SECRETO)
            {
                printf("Numero secreto eh maior\n");
            }

            printf("Digite seu palpite\n");
            scanf("%d", &n);

            tentativas++;

            // Apos 5 tentativas, da a dica ao user
            if (tentativas == 5)
            {
                printf("O numero secreto eh impar!\n");
            }

        } while (n != SECRETO);
    }
    return 0;
}