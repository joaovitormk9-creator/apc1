#include <stdio.h>

int main(){

    int n;
    int i;
    printf("Digite um numero: \n");
    scanf("%d", &n);

    printf("Multiplos de %d entre 1 e 100: \n", n);

    for (i = n; i <= 100; i += n) {
            printf("%d\n", i);
        }
    


    return 0;
}