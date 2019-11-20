#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXIMO 25

int main()
{
    int numero, aleatorio, i = 0;

    srand(time(NULL));
    aleatorio = rand() % MAXIMO + 1;

    do {

            printf("\n%dº TENTATIVA: ", i+1);
            scanf("%d", &numero);
            i++;

            if(numero > aleatorio) {
                printf("Errou! Está abaixo!");
            } else if(numero < aleatorio) {
                printf("Errou! Está acima!");
            } else
                printf("Acertou!\n\nO numero aleatorio e %d\n\n", aleatorio);

    } while((i < 5) && (numero != aleatorio));

    if(numero != aleatorio)
        printf("\n\nEsgotou as suas tentativas. O numero aleatorio era o %d\n\n", aleatorio);

    return 0;
}
