#include <stdio.h>

int main (){

    int dia;

    printf("Digite um dia da semana de 1 a 7: \n");
    scanf("%i", &dia);

    // // if (dia = 1 || dia == 7) {
    // //     printf("Final de semana\n", dia);
    // // }
    // // else if (dia == 2 || dia == 3 || dia == 4 || dia == 5 || dia == 6) {
    // //     printf("Dia util\n", dia);
    // // }
    // // else {
    // //     printf("naum eh um dia da semana\n", dia);
    // }

    switch (dia) {
        case 1: printf("Domingo, Final de semana\n"); break;
        case 2: printf("Segunda-Feira, Dia útil\n"); break;
        case 3: printf("Terça-Feira, Dia útil\n"); break;
        case 4: printf("Quarta-Feira, Dia útil\n"); break;
        case 5: printf("Quinta-Feira, Dia útil\n"); break;
        case 6: printf("Sexta-Feira, Dia útil\n"); break;
        case 7: printf("Sábado, Final de semana\n"); break;
        default: printf("Não é um dia da semana\n");
    }


    return 0;
}