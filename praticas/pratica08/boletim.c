#include <stdio.h>

int main (){
    float notas[10][2];
    float media;
for (int i = 0; i < 10; i++){
    printf("\nAluno %d\n", i + 1);

    printf("Nota 1: \n");
    scanf("%f", &notas[i][0]);

    printf("Nota 2: \n");
    scanf("%f", &notas[i][1]);

}
printf("--------------------BOLETIM--------------------\n");

for (int i = 0; i < 10; i++) {
    media = (notas[i][0] + notas[i][1]) / 2;

    printf("Aluno %d NOTA 1: %.1f | NOTA 2: %.1f Media: %.1f\n", i + 1,
    notas[i][0], notas[i][1], media);
}



    return 0;
}