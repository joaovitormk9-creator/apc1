#include <stdio.h>

int main(){
   int opcao = 0; 
   do{
    printf("MENU PRINCIPAL\n");
    printf("1 - Consultar saldo\n");
    printf("2 - Recarregar\n");
    printf("3 - Ver recados\n");
    printf("4 - Ver ligações\n");
    printf("5 - Sair\n");
    printf("Ecolha uma opção >\n ");
    scanf("%i", &opcao);
    while(getchar() != '\n');

    switch(opcao) {
        case 1: printf("Seu saldo é: 100,00\n"); break;
        case 2: printf("Recarregando\n"); break;
        case 3: printf("Você tem 9 recados\n"); break;
        case 4: printf("Você tem 8 ligações\n"); break;
        case 5: printf("Obrigado pelo contato\n"); break;
        default: printf("Opção Invalida! Tente novamente.\n");
    }
} while (opcao != 5);

    printf("Obrigado pelo contato! Até logo\n");

    return 0;
}