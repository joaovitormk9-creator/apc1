#include <stdio.h>
#include <math.h>

int main(){
    //1. Entrada
    int operador1;
    int operador2;

    printf("Entre com numero inteiro: ");
    scanf("%i", &operador1);
    while(getchar() != '\n');

    printf("Entre com numero inteiro: ");
    scanf("%i", &operador2);
    while(getchar() != '\n');
 
    // 2. Processamento
    int soma = operador1 + operador2;
    int subtracao = operador1 - operador2;
    int multiplicacao = operador1 * operador2;
    float divisao = operador1 / operador2;
    int resto = operador1 % operador2; // modulo, não é percentual

    //3. Saída
    printf("%i + %i = %i\n", operador1, operador2, soma);
    printf("%i - %i = %i\n", operador1, operador2, subtracao);
    printf("%i * %i = %i\n", operador1, operador2, multiplicacao);
    divisao = operador1 * 1.0f / operador2;
    printf("%i / %i = %f\n", operador1, operador2, divisao);

    // Funções da matemática
    double potencia = pow(2, 3); //2^3 = 2 * 2 * 2
    double raiz_quadrada = sqrt(2);
    double logaritmo = log(2);
    double seno = sin(2*3.14/180); // 2 Graus = 2*PI/180 radianos


    return 0;
}