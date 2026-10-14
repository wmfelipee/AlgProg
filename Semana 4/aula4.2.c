/*2. (5pts) Uma estação meteoroló gica registra a temperatura e a condição do tempo ao longo da manhã,
realizando uma medição a cada 3 horas, iniciando às 0h e terminando às 12h.
Para cada horário, devem ser informados a temperatura registrada e um có digo correspondente à condição do
tempo: 1 – Ensolarado, 2 – Nublado, 3 – Chuvoso.
Faça um programa utilizando obrigatoriamente for e switch-case:
a) calcule a média das temperaturas registradas;
b) informe a maior temperatura registrada;
c) informe o horário em que ocorreu a maior temperatura;
d) conte quantas mediçõ es indicaram cada uma das três condições meteorológicas.
Os horários considerados são: 0h, 3h, 6h, 9h e 12h*/
#include <stdio.h>

int main() {
    int hmax = 0, tmax = 0, temp, condicao, soma = 0;
    float media;
    int ensolarado = 0, nublado = 0, chuvoso = 0;

    //Solicita ao user os valores 
    for(int hora = 0; hora <= 12; hora += 3) {
        printf("Temperatura registrada as %dh: \n", hora);
        scanf("%d", &temp);

        printf("Condicao do tempo (1-Ensolarado, 2-Nublado, 3-Chuvoso): \n");
        scanf("%d", &condicao);

        //Guarda os valores de temperatura
        soma += temp;
        
        //Verifica qual a temperatura max e o seu horario
        if (tmax <= temp){
            tmax = temp;
            hmax = hora;
        }

        //Conta quantas medicoes acontecem com cada tipo de tempo
        switch (condicao){
            case 1:
                ensolarado++;
                break;
            case 2:
                nublado++;
                break;
            case 3:
                chuvoso++;
                break;
            default:
                printf("Condicao invalida!\n");
        }

        printf("\n");
    }
    //Faz a media das temperaturas    
    media = soma / 5.0;
    
    //Imprime as respostas
    printf("Media das temperaturas: %1.2f\n", media);
    printf("Maior temperatura: %d\n", tmax);
    printf("Horario da maior temperatura: %d\n", hmax);
    printf("Medicoes com o tempo ensolarado: %d\n", ensolarado);
    printf("Medicoes com o tempo nublado: %d\n", nublado);
    printf("Medicoes com o tempo chuvoso: %d\n", chuvoso);

    return 0;
}