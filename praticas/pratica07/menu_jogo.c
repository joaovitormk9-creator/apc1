#include <stdio.h>

int main(){

    int opcao;
    
    do{

    printf("MENU\n");
    printf("1 - Novo jogo \n");
    printf("2 - Continuar jogo \n");
    printf("3 - Ver pontuação \n");
    printf("4 - Sair \n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Novo jogo iniciado!\n");
    } else if (opcao == 2) {
        printf("Continuando o jogo!\n");
    } else if (opcao == 3) {
        printf("Sua pontuação é: 150\n");
    } else if (opcao == 4) {
        printf("Saindo do jogo\n");
    } else {
        printf("Opção invalida!\n");
    }

    } while (opcao != 4);


    return 0;
}