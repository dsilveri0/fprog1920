#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salto, maiorSalto, menorSalto = 3000, mediaSaltos, somaSaltos;
    int numTotalSaltos = 0;

    do {

        do {

            printf("Introduza uma sequencia de saltos: \n");
            scanf("%f", &salto);

        } while(salto < 0);

        if(salto > 0) {

            numTotalSaltos = numTotalSaltos + 1;
            somaSaltos = somaSaltos + salto;
            mediaSaltos = somaSaltos / numTotalSaltos;

            if(salto > maiorSalto)
                maiorSalto = salto;

            if(salto < menorSalto)
                menorSalto = salto;

        }

    } while(salto != 0);


    printf("Maior Salto: %.1f \n", maiorSalto);
    printf("Menor Salto: %.1f \n", menorSalto);
    printf("Media dos Saltos: %f \n", mediaSaltos);


    return 0;
}
