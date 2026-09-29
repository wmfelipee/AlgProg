#include <stdio.h>

#define PEIXE 100
#define ONCA 50
#define MACACO 20
#define ARARA 10
#define FLAMINGO 5
#define TARTARUGA 2
#define COROA 1

int main(){
    int valor, qtdetotal, qtde_peixe, qtde_onca, qtde_macaco, qtde_arara, qtde_fla, qtde_tart, qtde_coroa;
    
    qtdetotal = 0;
    qtde_peixe = 0;
    qtde_onca = 0;
    qtde_macaco = 0;
    qtde_arara = 0;
    qtde_fla = 0;
    qtde_tart = 0;
    qtde_coroa = 0;

        do{
        printf("Qual o valor a ser devolvido?\n");
        scanf("%d", &valor);

            if (valor <= 0){
            printf("Valor invalido!\n");
            }
        }
        while(valor <= 0);

        while(valor >= PEIXE){
            qtdetotal++;
            qtde_peixe++;
            valor -= PEIXE;
        }

        while(valor >= ONCA){
            qtdetotal++;
            qtde_onca++;
            valor -= ONCA;
        }

        while(valor >= MACACO){
            qtdetotal++;
            qtde_macaco++;
            valor -= MACACO;
        }

        while(valor >= ARARA){
            qtdetotal++;
            qtde_arara++;
            valor -= ARARA;
        }

        while(valor >= FLAMINGO){
            qtdetotal++;
            qtde_fla++;
            valor -= FLAMINGO;
        }

        while(valor >= TARTARUGA){
            qtdetotal++;
            qtde_tart++;
            valor -= TARTARUGA;
        }

        while(valor >= COROA){
            qtdetotal++;
            qtde_coroa++;
            valor -= COROA;
        }

        printf("Quantidade total de notas/moedas: %d\n", qtdetotal);
        printf("Quantidade de notas de 100: %d\n", qtde_peixe);
        printf("Quantidade de notas de 50: %d\n", qtde_onca);
        printf("Quantidade de notas de 20: %d\n", qtde_macaco);
        printf("Quantidade de notas de 10: %d\n", qtde_arara);
        printf("Quantidade de notas de 5: %d\n", qtde_fla);
        printf("Quantidade de notas de 2: %d\n", qtde_tart);
        printf("Quantidade de moedas de 1: %d\n", qtde_coroa);

        return 0;
    
}