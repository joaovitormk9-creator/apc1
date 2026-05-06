#include <stdio.h>

int main (){

    int dia;

    printf("Digite um dia da semana1 a 7: \n", dia);
    scanf("%i", &dia);

    if (dia = 1 || dia == 7) {
        printf("Final de semana\n", dia);
    }
    else if (dia == 2 || dia == 3 || dia == 4 || dia == 5 || dia == 6) {
        printf("Dia util\n", dia);
    }
    else {
        printf("naum eh um dia da semana\n", dia);
    }


    return 0;
}