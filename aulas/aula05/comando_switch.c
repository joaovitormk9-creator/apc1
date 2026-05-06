#include <stdio.h>

int main (){
    int nota = 0;


    printf("Entre com uma nota de 1 a 5: \n");
    scanf("%i", &nota);

    // if (nota == 1) {
    //     printf("Ganhou uma estrela *\n");
    // } else if (nota == 2) {
    //     printf("Ganhou duas estrelas **\n");
    // } else if (nota == 3) {
    //     printf("Ganhou tres estrelas ***\n");
    // } else if (nota == 4) {
    //     printf("Ganhou quatro estrelas ****\n");
    // } else if (nota == 5) {
    //     printf("Ganhou cinco estrelas *****\n");
    // } else {
    //     printf("Nota invalida! Tente novamente. \n");
    // }

    switch(nota) {
        case 1: printf("Ganhou uma estrela *\n"); break;
        case 2: printf("Ganhou duas estrelas **\n"); break;
        case 3: printf("Ganhou tres estrelas ***\n"); break;
        case 4: printf("Ganhou quatro estrelas ****\n"); break;
        case 5: printf("Ganhou cinco estrelas *****\n"); break;
        default: printf("Nota invalida! Tente novamente. \n");
    }

    return 0;
}