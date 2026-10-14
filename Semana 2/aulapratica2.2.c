/*2. (3pts) Leia as três notas de um aluno. A primeira e a segunda nota têm peso 0,3, e a terceira nota tem peso 0,4.
Calcule e imprima a média ponderada do aluno. */

#include <stdio.h>

int main(){
    // Variaveis
    float nota1, nota2, nota3, media;

    // Solicita ao usuario as informacoes
    printf("Insira a primeira nota:\n");
    scanf("%f", &nota1);

    printf("Insira a segunda nota:\n");
    scanf("%f", &nota2);

    printf("Insira a terceira nota:\n");
    scanf("%f", &nota3);

    // Calcula
    media = (nota1*0.3) + (nota2*0.3) + (nota3*0.4);

    // Imprime
    printf("A media ponderada do aluno eh %1.1f.\n", media);

    return 0;
}