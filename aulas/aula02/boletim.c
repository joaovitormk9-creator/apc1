#include <stdio.h>

int main(){
    char tecla_pressionada = 'A';
    int inteiro = 10;
    float decimal = 5.2f; // ate 6 casas decimais
    double duplo = 5.2; //ate 12 casas decimais

printf("=============================\n"); 
printf("       BOLETIM DE NOTAS      \n");
printf("=============================\n");
printf("Disciplina        A1 A2 A3 MF\n");

int codigo_disciplina;
float nota_a1;
float nota_a2;
float nota_a3;
float media_final;

codigo_disciplina = 118;
nota_a1 = 5.2f;
nota_a2 = 2.3f;
nota_a3 = 6.0f;
media_final = 5.6f;

printf("%05i %5.1f %5.1f %5.1f %5.1f\n", 
    codigo_disciplina, nota_a1, nota_a2, nota_a3, media_final);

codigo_disciplina = 257;
nota_a1 = 6.0f;
nota_a2 = 5.0f;
nota_a3 = 0.0f;
media_final = 5.5f;


printf("%05i %5.1f %5.1f %5.1f %5.1f\n", 
    codigo_disciplina, nota_a1, nota_a2, nota_a3, media_final);

codigo_disciplina = 91;
nota_a1 = 10.0f;
nota_a2 = 4.0f;
nota_a3 = 4.0f;
media_final = 4.0f;

printf("%05i %5.1f %5.1f %5.1f %5.1f\n",
    codigo_disciplina, nota_a1, nota_a2, nota_a3, media_final);

return 0;
}
