#include <stdio.h>

int main(){
    float n1, n2, n3;

    printf("Informe o primeiro valor: \n");
    scanf("%f", &n1);

    printf("Informe o segundo valor: \n");
    scanf("%f", &n2);

    printf("Informe o terceiro valor: \n");
    scanf("%f", &n3);

    if(n1 < n2 && n2 < n3){
        printf("%1.1f %1.1f %1.1f\n", n1, n2, n3);
    }
    
    if(n1 < n3 && n3 < n2){
        printf("%1.1f %1.1f %1.1f\n", n1, n3, n2);
    }

    if(n2 < n1 && n1 < n3){
        printf("%1.1f %1.1f %1.1f\n", n2, n1, n3);
    }

    if(n2 < n3 && n3 < n1){
        printf("%1.1f %1.1f %1.1f\n", n2, n3, n1);
    }

    if(n3 < n1 && n1 < n2){
        printf("%1.1f %1.1f %1.1f\n", n3, n1, n2);
    }

    if(n3 < n2 && n2 < n1){
        printf("%1.1f %1.1f %1.1f\n", n3, n2, n1);
    }

    return 0;
}