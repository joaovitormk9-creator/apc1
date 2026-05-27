#include <stdio.h>
#include <string.h>

int main(){
    char texto[11];

    texto[0] = 'o';
    texto[1] = 'l';
    texto[2] = 'a';
    texto[3] = ' ';
    texto[4] = 'p';
    texto[5] = 'e';
    texto[6] = 's';
    texto[7] = 's';
    texto[8] = 'o';
    texto[9] = 'a';
    texto[10] = '\0';

    printf("%s\n", texto);

    texto[3] = '\0';

    printf("%s\n", texto);

    for (int i = 0; i < 11; i++) {
        printf("%c\n", texto[i]);
    }

    strcpy(texto, "Bom"); // como atribuir uma string
    printf("%s\n", texto);

    // concatena string
    strcat(texto, " dia");
    printf("%s\n", texto);

    // tamanho da string
    int tamanho = strlen(texto);
    printf("O tamanho do texto é %i\n", tamanho);
    int capacidade = sizeof(texto);
    printf("A capacidade do texto é %i\n", capacidade);

    // preencher com um caracter
    memset(texto, 'a', 8);
    printf("%s\n", texto);

    // limpa a string
    memset(texto, '\0', capacidade);

    int compara = strcmp("banana", "laranja");
    printf("banana == laranja? %i\n", compara);
    // -1 banana vem antes de laranja na órdem alfabética
    compara = strcmp("laranja", "banana");
    printf("laranja == banana? %i\n", compara);
    // 1 laranja vem depois de banana na órdem alfebética
    compara = strcmp("banana", "banana");
    printf("banana == banana? %i\n", compara);
    // 0 são iguais
    compara = strcmp("banana", "BANANA");
    printf("banana == BANANA? %i\n", compara);
    // 1 são diferentes mas ambos estão na mesma posição alfabética

    char *tem_letra_a = strchr("sergipe", 'a');
    printf("a palavra sergipe tem letra a? %s\n", tem_letra_a);
    tem_letra_a = strchr("roraima", 'a');
    printf("a palavra roraima tem letra a? %s\n", tem_letra_a);

    char *tem_silva = strstr("joao da silva", "silva");
    printf("a palavra silva no nome? %s\n", tem_silva);
    

    return 0;
}