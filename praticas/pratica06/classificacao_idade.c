#include <stdio.h>

int main () {

    int idade;

    printf("Digite sua idade: \n", idade);
    scanf("%i", &idade);

    if (idade <= 12) {
        printf("Voce eh criança\n", idade);
    } else if (idade >= 13 && idade <= 17){
        printf("Voce eh adolescente\n", idade);
    } else if (idade >= 18 && idade <= 64){
        printf("Voce eh adulto\n", idade);
    } else {
        printf("Voce eh idoso\n", idade);
    }


    return 0;
}