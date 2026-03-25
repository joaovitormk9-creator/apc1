#include <stdio.h>

int main (){
        /* entrada de dados*/

        char tecla_pressionada;

        printf("Pressione uma tecla: ");
        scanf("%c", &tecla_pressionada);
        while(getchar() != '\n'); // limpar o buffer

        printf("Voce presionou a tecla %c\n", tecla_pressionada);

        int idade;

        printf("informe a sua idade: ");
        scanf("%i", &idade);
        while(getchar() != '\n');


        printf("Voce tem %i anos\n", idade);

        float preco;
        printf("informe o preco da passagem: ");
        scanf("%f", &preco);
        while(getchar() != '\n');

        printf("O preco da passagem eh: %.2f\n", preco);


    return 0;
}
