#include <stdio.h>

int main() {

    int opcao;

    printf("Escolha a opcao do menu\n");
    printf("1 - NOVO JOGO\n");
    printf("2 - CONTINUAR JOGO\n");
    printf("3 - VER PONTUAÇÃO\n");
    printf("4 - SAIR\n");
    scanf("%i", &opcao);

    switch(opcao) {
        case 1: printf("NOVO JOGO\n"); break;
        case 2: printf("CONTINUAR JOGO\n"); break;
        case 3: printf("VER PONTUAÇÃO\n"); break;
        case 4: printf("SAIR\n"); break;
        default: printf("OPÇÃO NÃO ECONTRADA\n");
    }


    return 0;
}