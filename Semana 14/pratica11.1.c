#include <stdio.h>

#define N 3

typedef struct {
    int codigo;
    float area;
    float valor;
} IMOVEL;

void atualizaValor(IMOVEL *imovel, float percentual);

int main(){
    int i, cod, pos = -1;
    float percent;
    IMOVEL casa[N];

    for(i = 0; i < N; i++){
        printf("Insira o codigo do imovel %d: ", i+1);
        scanf("%d", &casa[i].codigo);
        
        printf("\nInsira a area do imovel %d: ", i+1);
        scanf("%f", &casa[i].area);

        printf("\nInsira o valor do imovel %d: ", i+1);
        scanf("%f", &casa[i].valor);

        printf("\n");
    }

    printf("\n--- RELATORIO DE IMOVEIS ---\n");
    printf("Codigo\t\tArea (m2)\t\tValor (R$)\n");
    for(i = 0; i < N; i++){
        printf("%d\t\t%.2f\t\t\t%.2f", casa[i].codigo, casa[i].area, casa[i].valor);
        printf("\n");
    }

    do{
        printf("\nInforme o codigo do imóvel para ajuste: ");
        scanf("%d", &cod);

        for(i = 0; i < N; i++){
            if(cod == casa[i].codigo){
                printf("\nInforme o percentual de reajuste: ");
                scanf("%f", &percent);
                pos = i;
            }
        }

        if(pos == -1){
            printf("\nCodigo ivalido!\n");
        }
    } while(pos == -1);

    atualizaValor(&casa[pos], percent);


    printf("\n--- RELATORIO DE IMOVEIS ---\n");
    printf("Codigo\t\tArea (m2)\t\tValor (R$)\n");
    for(i = 0; i < N; i++){
        printf("%d\t\t\t%.2f\t\t\t%.2f\n", casa[i].codigo, casa[i].area, casa[i].valor);
    }

}


void atualizaValor(IMOVEL *imovel, float percentual){
    imovel->valor = imovel->valor + (imovel->valor * percentual / 100);
}