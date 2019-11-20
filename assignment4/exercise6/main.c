#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, resto, quociente, acumulador = 0;

    do {

        printf("Introduza um número: ");
        scanf("%d", &numero);

    } while(numero <= 0);

    do {

        resto = numero % 10;
        numero = numero / 10;

        acumulador = acumulador + resto;

    } while(numero != 0);

    printf("%d\n", acumulador);

    return 0;
}
