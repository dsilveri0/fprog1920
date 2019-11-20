#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, rsum, rsub, rmul, rdivi;
    float rdiv;

    printf("Introduza o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Introduza o segundo numero inteiro: ");
    scanf("%d", &num2);

    rsum = num1 + num2;
    rsub = num1 - num2;
    rmul = num1 * num2;
    rdiv = num1 / num2;
    rdivi = num1 % num2;

    printf("********************************************************\n");

    printf("* Soma: \t\t\t\t%d + %d = \t%d *\n", num1, num2, rsum);
    printf("* Subtracao: \t\t\t\t%d - %d = \t%d *\n", num1, num2, rsub);
    printf("* Multiplicacao: \t\t%d * %d = \t%d *\n", num1, num2, rmul);
    printf("* Divisao: \t\t\t%d / %d = \t%.1f\t*\n", num1, num2, rdiv);
    printf("* Resto da divisao inteira: \t%d %% %d = \t%d\t*\n", num1, num2, rdivi);

    printf("********************************************************\n");

    return 0;
}
