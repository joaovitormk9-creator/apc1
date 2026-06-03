#include <stdio.h>

int main (){

    int vetor[10];
    int numero;
    int encontrado = 0;

    printf("Digite 10 numeros inteiros: \n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    printf("Digite o numero que deseja localizar: \n");
    scanf("%d", &numero);

        for (int i = 0; i < 10; i++) {
            if (vetor[i] == numero) {
                printf("numero encontrado na posição %d. \n", i + 1);
                    encontrado = 1;
                    break;
            }
        }
        
        if (encontrado == 0) {
            printf("Numero não encontrado no vetor .\n");
        }
    


    return 0;
}