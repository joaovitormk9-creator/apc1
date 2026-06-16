#include <stdio.h>
#include <string.h>

int main() {
    struct Registro {
        int id;
        int tipo;
        char titulo[80];
        char genero[50];
        float nota;
    };

    struct Registro catalogo[50];

    int opcao = -1;
    int quantidadeAtual = 0;
    int i, j;
    int idBusca;
    int encontrado;
    int idDuplicado;
    char entrada[100];

    do {
        printf("\n=========================================\n");
        printf("        CATALOGO DE FÉRIAS\n");
        printf("=========================================\n");
        printf("1 - Cadastrar item\n");
        printf("2 - Listar itens\n");
        printf("3 - Buscar item por ID\n");
        printf("4 - Atualizar item\n");
        printf("5 - Remover item\n");
        printf("0 - Sair\n");
        printf("=========================================\n");
        printf("Escolha uma opcao: ");

        fgets(entrada, sizeof(entrada), stdin);

        if (sscanf(entrada, "%d", &opcao) != 1) {
            printf("\nEntrada invalida! Digite apenas numeros.\n");
            opcao = -1;
        }

        if (opcao == 1) {
            if (quantidadeAtual >= 50) {
                printf("\nLimite de registros atingido!\n");
            } else {
                do {
                    idDuplicado = 0;

                    printf("\nDigite o ID do item: ");
                    fgets(entrada, sizeof(entrada), stdin);

                    if (sscanf(entrada, "%d", &catalogo[quantidadeAtual].id) != 1) {
                        printf("ID invalido! Digite apenas numeros.\n");
                        idDuplicado = 1;
                    } else if (catalogo[quantidadeAtual].id <= 0) {
                        printf("ID invalido! Digite um numero positivo.\n");
                        idDuplicado = 1;
                    } else {
                        for (i = 0; i < quantidadeAtual; i++) {
                            if (catalogo[i].id == catalogo[quantidadeAtual].id) {
                                printf("Esse ID ja esta cadastrado! Digite outro.\n");
                                idDuplicado = 1;
                            }
                        }
                    }

                } while (idDuplicado == 1);

                do {
                    printf("\nEscolha o tipo do item:\n");
                    printf("1 - Filme\n");
                    printf("2 - Serie\n");
                    printf("3 - Musica\n");
                    printf("4 - Jogo\n");
                    printf("Opcao: ");

                    fgets(entrada, sizeof(entrada), stdin);

                    if (sscanf(entrada, "%d", &catalogo[quantidadeAtual].tipo) != 1) {
                        printf("Tipo invalido! Digite apenas numeros.\n");
                        catalogo[quantidadeAtual].tipo = 0;
                    } else if (catalogo[quantidadeAtual].tipo < 1 || catalogo[quantidadeAtual].tipo > 4) {
                        printf("Tipo invalido! Escolha uma opcao entre 1 e 4.\n");
                    }

                } while (catalogo[quantidadeAtual].tipo < 1 || catalogo[quantidadeAtual].tipo > 4);

                do {
                    printf("Digite o titulo: ");
                    fgets(catalogo[quantidadeAtual].titulo, sizeof(catalogo[quantidadeAtual].titulo), stdin);
                    catalogo[quantidadeAtual].titulo[strcspn(catalogo[quantidadeAtual].titulo, "\n")] = '\0';

                    if (strlen(catalogo[quantidadeAtual].titulo) == 0) {
                        printf("O titulo nao pode ficar vazio.\n");
                    }

                } while (strlen(catalogo[quantidadeAtual].titulo) == 0);

                do {
                    printf("Digite o genero: ");
                    fgets(catalogo[quantidadeAtual].genero, sizeof(catalogo[quantidadeAtual].genero), stdin);
                    catalogo[quantidadeAtual].genero[strcspn(catalogo[quantidadeAtual].genero, "\n")] = '\0';

                    if (strlen(catalogo[quantidadeAtual].genero) == 0) {
                        printf("O genero nao pode ficar vazio.\n");
                    }

                } while (strlen(catalogo[quantidadeAtual].genero) == 0);

                do {
                    printf("Digite uma nota de 0 a 10: ");
                    fgets(entrada, sizeof(entrada), stdin);

                    if (sscanf(entrada, "%f", &catalogo[quantidadeAtual].nota) != 1) {
                        printf("Nota invalida! Digite apenas numeros.\n");
                        catalogo[quantidadeAtual].nota = -1;
                    } else if (catalogo[quantidadeAtual].nota < 0 || catalogo[quantidadeAtual].nota > 10) {
                        printf("Nota invalida! Digite uma nota entre 0 e 10.\n");
                    }

                } while (catalogo[quantidadeAtual].nota < 0 || catalogo[quantidadeAtual].nota > 10);

                quantidadeAtual++;

                printf("\nItem cadastrado com sucesso!\n");
            }
        }

        else if (opcao == 2) {
            if (quantidadeAtual == 0) {
                printf("\nNao ha itens cadastrados.\n");
            } else {
                printf("\n============= LISTA DE ITENS =============\n");

                for (i = 0; i < quantidadeAtual; i++) {
                    printf("\nItem %d\n", i + 1);
                    printf("ID: %d\n", catalogo[i].id);

                    if (catalogo[i].tipo == 1) {
                        printf("Tipo: Filme\n");
                    } else if (catalogo[i].tipo == 2) {
                        printf("Tipo: Serie\n");
                    } else if (catalogo[i].tipo == 3) {
                        printf("Tipo: Musica\n");
                    } else {
                        printf("Tipo: Jogo\n");
                    }

                    printf("Titulo: %s\n", catalogo[i].titulo);
                    printf("Genero: %s\n", catalogo[i].genero);
                    printf("Nota: %.1f\n", catalogo[i].nota);
                }
            }
        }

        else if (opcao == 3) {
            if (quantidadeAtual == 0) {
                printf("\nNao ha itens cadastrados.\n");
            } else {
                encontrado = 0;

                printf("\nDigite o ID que deseja buscar: ");
                fgets(entrada, sizeof(entrada), stdin);

                if (sscanf(entrada, "%d", &idBusca) != 1) {
                    printf("ID invalido! Digite apenas numeros.\n");
                } else {
                    for (i = 0; i < quantidadeAtual; i++) {
                        if (catalogo[i].id == idBusca) {
                            printf("\nItem encontrado!\n");
                            printf("ID: %d\n", catalogo[i].id);

                            if (catalogo[i].tipo == 1) {
                                printf("Tipo: Filme\n");
                            } else if (catalogo[i].tipo == 2) {
                                printf("Tipo: Serie\n");
                            } else if (catalogo[i].tipo == 3) {
                                printf("Tipo: Musica\n");
                            } else {
                                printf("Tipo: Jogo\n");
                            }

                            printf("Titulo: %s\n", catalogo[i].titulo);
                            printf("Genero: %s\n", catalogo[i].genero);
                            printf("Nota: %.1f\n", catalogo[i].nota);

                            encontrado = 1;
                        }
                    }

                    if (encontrado == 0) {
                        printf("\nNenhum item encontrado com esse ID.\n");
                    }
                }
            }
        }

        else if (opcao == 4) {
            if (quantidadeAtual == 0) {
                printf("\nNao ha itens cadastrados.\n");
            } else {
                encontrado = 0;

                printf("\nDigite o ID do item que deseja atualizar: ");
                fgets(entrada, sizeof(entrada), stdin);

                if (sscanf(entrada, "%d", &idBusca) != 1) {
                    printf("ID invalido! Digite apenas numeros.\n");
                } else {
                    for (i = 0; i < quantidadeAtual; i++) {
                        if (catalogo[i].id == idBusca) {
                            encontrado = 1;

                            printf("\nItem encontrado. Digite os novos dados.\n");

                            do {
                                printf("\nNovo tipo:\n");
                                printf("1 - Filme\n");
                                printf("2 - Serie\n");
                                printf("3 - Musica\n");
                                printf("4 - Jogo\n");
                                printf("Opcao: ");

                                fgets(entrada, sizeof(entrada), stdin);

                                if (sscanf(entrada, "%d", &catalogo[i].tipo) != 1) {
                                    printf("Tipo invalido! Digite apenas numeros.\n");
                                    catalogo[i].tipo = 0;
                                } else if (catalogo[i].tipo < 1 || catalogo[i].tipo > 4) {
                                    printf("Tipo invalido! Escolha uma opcao entre 1 e 4.\n");
                                }

                            } while (catalogo[i].tipo < 1 || catalogo[i].tipo > 4);

                            do {
                                printf("Novo titulo: ");
                                fgets(catalogo[i].titulo, sizeof(catalogo[i].titulo), stdin);
                                catalogo[i].titulo[strcspn(catalogo[i].titulo, "\n")] = '\0';

                                if (strlen(catalogo[i].titulo) == 0) {
                                    printf("O titulo nao pode ficar vazio.\n");
                                }

                            } while (strlen(catalogo[i].titulo) == 0);

                            do {
                                printf("Novo genero: ");
                                fgets(catalogo[i].genero, sizeof(catalogo[i].genero), stdin);
                                catalogo[i].genero[strcspn(catalogo[i].genero, "\n")] = '\0';

                                if (strlen(catalogo[i].genero) == 0) {
                                    printf("O genero nao pode ficar vazio.\n");
                                }

                            } while (strlen(catalogo[i].genero) == 0);

                            do {
                                printf("Nova nota de 0 a 10: ");
                                fgets(entrada, sizeof(entrada), stdin);

                                if (sscanf(entrada, "%f", &catalogo[i].nota) != 1) {
                                    printf("Nota invalida! Digite apenas numeros.\n");
                                    catalogo[i].nota = -1;
                                } else if (catalogo[i].nota < 0 || catalogo[i].nota > 10) {
                                    printf("Nota invalida! Digite uma nota entre 0 e 10.\n");
                                }

                            } while (catalogo[i].nota < 0 || catalogo[i].nota > 10);

                            printf("\nItem atualizado com sucesso!\n");
                        }
                    }

                    if (encontrado == 0) {
                        printf("\nNenhum item encontrado com esse ID.\n");
                    }
                }
            }
        }

        else if (opcao == 5) {
            if (quantidadeAtual == 0) {
                printf("\nNao ha itens cadastrados.\n");
            } else {
                encontrado = 0;

                printf("\nDigite o ID do item que deseja remover: ");
                fgets(entrada, sizeof(entrada), stdin);

                if (sscanf(entrada, "%d", &idBusca) != 1) {
                    printf("ID invalido! Digite apenas numeros.\n");
                } else {
                    for (i = 0; i < quantidadeAtual; i++) {
                        if (catalogo[i].id == idBusca) {
                            for (j = i; j < quantidadeAtual - 1; j++) {
                                catalogo[j] = catalogo[j + 1];
                            }

                            quantidadeAtual--;
                            encontrado = 1;

                            printf("\nItem removido com sucesso!\n");

                            i = quantidadeAtual;
                        }
                    }

                    if (encontrado == 0) {
                        printf("\nNenhum item encontrado com esse ID.\n");
                    }
                }
            }
        }

        else if (opcao == 0) {
    printf("\nEncerrando o sistema...\n\n");

    printf("░░░░░░▄▄▄▄███▄▄▄▄░░░░░░░░░░░░░\n");
    printf("░░░▄▄█▀░░░░░░░░░▀▀▄▄░░░░░░░░░░\n");
    printf("░░█▀░░░░░░░░░░░░░░░▀█▄░░░░░░░░\n");
    printf("░█▀░░░░░░░░░░░░░░░░░░█▄░░░░░░░\n");
    printf("██░░░░░░░░░░░░░░░░░░░░█▄░░░░░░\n");
    printf("█░░░░░░░░░░░░░░░░░░░░░░█▄░░░░░\n");
    printf("██░░░░░░░░░░░░▄▄▄▄▄█▀▀▀██▄░░░░\n");
    printf("▀█░░░░░░░░░▄█▀▀░░▀▀█▄░░░░█▄░░░\n");
    printf("░█▄░▄░░░░░▄█░░░░░░░░█▄░█░░█░░░\n");
    printf("░▄█▄██▄░░░█▄░░██░░░░██▄▄▄██░░░\n");
    printf("░████░▀▀░░░█▄░░░░░░▄█░░░░░██░░\n");
    printf("░█░░██▄▄░░░░▀██▄▄██▀▄▄▄▄▄▄█░░░\n");
    printf("░░▄█▀░░░░░░░░░▄▄██▀▀▀▀▀▀▀░▀█▄░\n");
    printf("░░▀█░░░░░░░▄█▀▀░░░░░░░░░░░░░█▄\n");
    printf("░░░▀█▄▄█▀░█▀░░░░░░░░░░░░░░░▄█▀\n");
    printf("░░░░░░██░▄█░░░█▀██▀▀█▀██▀▀▀▀░░\n");
    printf("░░░░░▄█░░▀█░░▀█░█░░██░██░░░░░░\n");
    printf("░░░░██▀█▄░▀█▄░▀▀████▀▀██░░░░░░\n");
    printf("░░░░█░░░▀▀█▄▀█▄▄▄▄▄▄▄▄██▄░░░░░\n");
    printf("\n====================================\n");
    printf("           BOAS FERIAS!\n");
    printf("====================================\n");
}

        else if (opcao != -1) {
            printf("\nOpcao invalida! Escolha uma opcao do menu.\n");
        }

    } while (opcao != 0);

    return 0;
}