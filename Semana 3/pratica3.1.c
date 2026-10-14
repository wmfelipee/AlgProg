/*. (3pts) Considere um tabuleiro de jogo da velha representado por 9 valores inteiros:
 1 representa uma posição ocupada pelo jogador;
 0 representa uma posição que não pertence ao jogador.
As posições são:
a b c
d e f
g h i
Faça um programa que leia esses 9 valores e veriϐique se o jogador venceu.
O jogador vence se possuir três posições em sequência em qualquer linha, coluna ou diagonal.*/

#include <stdio.h>

int main(){
    int a, b, c, d, e, f, g, h, i;
    
    // Solicita ao usuario os valores do jogo
    printf("Digite os 9 valores do tabuleiro (0 ou 1):\n");
    scanf("%d %d %d"
          "%d %d %d"
          "%d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i);

    // Verificacao de linhas
    if(a == 1 && b == 1 && c == 1 || d == 1 && e == 1 && f == 1 || g == 1 && h == 1 && i == 1){
        printf("O jogador venceu!\n");
    }
    
    // Verificacao de colunas
    else if(a == 1 && d == 1 && g == 1 || b == 1 && e == 1 && h == 1 || c == 1 && f == 1 && i == 1){
        printf("O jogador venceu!\n");
    }

    // Verificacao de diagonais
    else if(a == 1 && e == 1 && i == 1 || c == 1 && e == 1 && g == 1){
       printf("O jogador venceu!\n");
    }
    else{
        printf("O jogador nao venceu!\n");
    }
    
    return 0;
}