#include <stdio.h>

int main(){
    int idade;

    printf("Entre com sua idade: \n");
    scanf("%i", &idade);
    while(getchar() != '\n');

    // && => 0 Falso E qualquer coisa = Sempre Falso
    printf("Voce eh uma crianca? %i\n", idade >=0 && idade <=12);
    
    // || => 1 Verdadeiro OU qualquer coisa = Sempre Verdadeira
    printf("Voce tem prioridade para vacinar? %i\n", idade <= 6 || idade >= 60);

    // ! => NAO Veradeiro = Falso, NAO Falso = Verdadeiro
    printf("Voce naum pode votar %i\n", !(idade >= 16));


    printf("Voce eh um adolescente? %i\n", idade >=12 && idade <=16);
    printf("Voce eh um jovem? %i\n", idade >=16 && idade <=21);
    printf("Voce eh uma adulto? %i\n", idade >=21);




    return 0;
}