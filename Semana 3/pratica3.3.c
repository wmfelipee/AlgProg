/*3. (4pts) Escreva um programa que, a partir de três valores inteiros fornecidos pelo usuário, veriϐica se eles
podem ser as medidas dos lados de um triângulo. Em caso positivo, veriϐicar se o triângulo é equilátero, isósceles
ou escaleno.
Considere as seguintes propriedades:
 O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados;
 Nenhum dos lados do triângulo pode ter comprimento igual a zero;
 Equilátero: tem os comprimentos dos três lados iguais;
 Isósceles: tem os comprimentos de dois lados iguais;
 Escaleno: tem os comprimentos dos três lados diferentes.
A saı́da deve ser necessariamente uma das mensagens a seguir: “triângulo inválido”, “triângulo equilátero”,
“triângulo isósceles” ou “triângulo escaleno”.*/

#include <stdio.h>

int main(){
    int a, b, c;

    // Solicita ao usuario as informacoes
    printf("Insira o valor dos 3 lados:\n");
    scanf("%d %d %d", &a, &b, &c);
        
    // Verifica se o triangulo e valido, e qual o seu tipo
    if(a < b + c && b < a + c && c < a + b){
    
        if(a == b && a == c){
            printf("Triangulo equilatero!");
        }

        if((a == b && a != c) || (a == c && a != b) || (b == c && b != a)){
            printf("Triangulo isosceles!");
        }

        if(a != b && a != c && b != c){
            printf("Triangulo escaleno!");
        }

    }
    else{
        printf("Triangulo invalido!");
    }
    
    return 0;
   
}