#include <stdio.h>

int main(){

    int numero;
    int i;
    int fatorial = 1;
    printf("Digite um numero inteiro positivo: \n");
    scanf("%d", &numero);

    if ( numero < 0) {
        printf("O numero escolhido não tem fatorial\n");
    } else {
        for (i = 1; i <= numero; i++) {
            fatorial = fatorial * i;
        }
        printf("Fatorial de %d é %d\n", numero, fatorial);
    }


    return 0;
}