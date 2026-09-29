/*2. (5pts) Escreva um programa que leia um nú mero inteiro positivo N. O programa deve analisar todos os números inteiros de 1 até N e determinar quantos divisores positivos cada um possui.
Ao final, exiba:
• o número que possui a maior quantidade de divisores;
• a quantidade de divisores desse número.
Caso haja empate, considere o menor número*/

#include <stdio.h>

int main()
{
    int n, i, j, temp, divMax, qtdeDivMax = 0;

    // Solicita ao user o valor
    printf("Digite o valor de N: ");
    scanf("%d", &n);

    // usa o contador pra ir ate o n
    for (i = 1; i <= n; i++)
    {
        temp = 0;

        // usa o j para ir testando os divisores
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
                temp++;
        }

        // guarda o nro com mais divisores e a quantidade de divisores do mesmo
        if (qtdeDivMax < temp)
        {
            qtdeDivMax = temp;
            divMax = i;
        }
    }

    // Imprime
    printf("Numero com mais divisores: %d\n", divMax);
    printf("Quantidade de divisores: %d\n", qtdeDivMax);

    return 0;
}