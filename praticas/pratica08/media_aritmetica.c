#include <stdio.h>

int main (){
    int n;
    printf("Digite quantos numeros deseja calcular: \n");
    scanf("%d", &n);

    int numeros[n];
    int soma = 0;

    for (int i = 0; i < n; i++) {
        printf("Digite o numero %d: \n", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    float media = (float)soma / n;

    printf("Media aritmetica: %.2f\n", media);



    return 0;
}