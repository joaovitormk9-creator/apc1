#include <stdio.h>

int main() {
    int numero = 0;

    printf("Digite um numero: \n", numero);
    scanf("%i", &numero);

    if (numero % 2 == 0) {
        printf("Esse numero eh par\n", numero);
    } else {
        printf("Esse numero eh impar\n", numero);
    }

    return 0;
}