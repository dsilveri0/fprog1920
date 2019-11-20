#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Introduza um numero inteiro: ");
    scanf("%d", &num);

    if(num>0){
        printf("Numero Positivo");
    } else if(num < 0) {
        printf("Numero Negativo");
    } else
        printf("Numero Nulo");

    if(num%2 == 0) {
        printf("\nNumero Par");
    } else {
        printf("\nNumero Impar");
    }

    return 0;
}
