#include <stdio.h>

int main() {
    int idade;
    char sexo;
    float altura;
    double peso;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite o peso: ");
    scanf("%lf", &peso);

    printf("\nFicha Cadastral\n");
    printf("Idade: %d\n", idade);
    printf("Sexo: %c\n", sexo);
    printf("Altura: %.2f\n", altura);
    printf("Peso: %.3lf\n", peso);

    return 0;
}