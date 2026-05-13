#include <stdio.h>

int main(){
    int numero = 0;

    printf("Entre com um numero entre 1 e 10: ");
    scanf("%i", &numero);
    // remove o char do buffer até \n
    while (getchar() != '\n'); 

    while(numero < 1 || numero > 10) {
        printf("Numero invalido! Tente novamente. \n");
        scanf("%i", &numero);
        while (getchar() != '\n');

    }

    

    return 0;
}