#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, res;

    printf("Introduza um numero inteiro entre 1 e 10: ");
    scanf("%d", &num);

    res = num * ((num + 1) / 2);

    printf("\n\nResultado: %d", res);

    return 0;
}
