#include <stdio.h>
#include <stdlib.h>

#define vencBaseCat1 600
#define vencBaseCat2 750
#define vencBaseCat3 1000

#define numDepend1Cat1 1.05
#define numDepend1Cat2 1.03
#define numDepend1Cat3 1.02

#define numDepend2Cat1 1.09
#define numDepend2Cat2 1.07
#define numDepend2Cat3 1.05

int main()
{
    int cat, dep;
    float result;

    printf("Indique  a sua categoria: ");
    scanf("%d", &cat);

    printf("\nIndique o numero de dependentes: ");
    scanf("%d", &dep);

    if(cat == 1 && dep == 1) {

        result = vencBaseCat1 * numDepend1Cat1;
        printf("O seu salario e %.2f", result);

    } else if (cat == 1 && dep >= 2) {

        result = vencBaseCat1 * numDepend2Cat1;
        printf("O seu salario e %.2f", result);

    } else if (cat == 2 && dep == 1) {

        result = vencBaseCat2 * numDepend1Cat2;
        printf("O seu salario e %.2f", result);

    } else if (cat == 2 && dep >= 2) {

        result = vencBaseCat2 * numDepend2Cat2;
        printf("O seu salario e %.2f", result);

    } else if (cat == 3 && dep == 1) {

        result = vencBaseCat3 * numDepend1Cat3;
        printf("O seu salario e %.2f", result);

    } else if (cat == 3 && dep >= 2) {

        result = vencBaseCat3 * numDepend2Cat3;
        printf("O seu salario e %.2f", result);

    }

    return 0;
}
