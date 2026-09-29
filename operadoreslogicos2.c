#include <stdio.h>

int main(){
    float d1, d2, t1, t2, vm1, vm2;

    printf("Qual a distancia percorrida pelo carro 1 em km?\n");
    scanf("%f", &d1);

    printf("Qual a distancia percorrida pelo carro 2 em km?\n");
    scanf("%f", &d2);

    printf("Qual a tempo levado pelo carro 1 em horas?\n");
    scanf("%f", &t1);

    printf("Qual a tempo levado pelo carro 2 em horas?\n");
    scanf("%f", &t2);

    vm1 = d1 / t1;

    vm2 = d2 / t2;

    if(vm1 > vm2){
        printf("O carro 1 teve maior velocidade media!\n");
    }

        if(vm2 > vm1){
        printf("O carro 2 teve maior velocidade media!\n");
    }

    return 0;
}