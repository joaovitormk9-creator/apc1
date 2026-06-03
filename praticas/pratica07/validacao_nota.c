#include <stdio.h>

int main(){

    float nota;
    do{
    printf("Digite sua nota entre 0 e 10: \n");
    scanf("%f", &nota);

    if (nota < 0 || nota > 10) {
        printf("Nota invalida, tente novamente\n");
    }
    } while(nota < 0 || nota > 10); {
    printf("Nota validada: %.1f \n", nota);
    }

    return 0;
}