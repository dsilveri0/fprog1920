#include <stdio.h>
#include <stdlib.h>

#define desconto1 0.04
#define desconto2 0.06
#define desconto3 0.08

int main()
{
    float montante, total;

    printf("Introduza o valor de compras efetuadas: ");
    scanf("%f", &montante);

    if(montante <= 500)

        printf("Nao e aplicado desconto.");

    else if(montante > 500 && montante <= 1250) {

        total = montante * desconto1;
        printf("Foi aplicado um desconto de %.0f%%, no valor de %.2f euros.", desconto1*100, total);

    } else if(montante > 1250 && montante <= 2000) {

        total = montante * desconto2;
        printf("Foi aplicado um desconto de %.0f%%, no valor de %.2f euros.", desconto2*100, total);

    } else if(montante > 2000) {

        total = montante * desconto3;
        printf("Foi aplicado um desconto de %.0f%%, no valor de %.2f euros.", desconto3*100, total);

    }


    return 0;
}
