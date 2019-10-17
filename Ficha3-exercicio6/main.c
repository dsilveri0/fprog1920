#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, sum;

    printf("Introduza um numero inteiro entre 1 e 10: ");
    scanf("%d", &num);

    //res = num * ((num + 1) / 2);

    switch (num) {
    case 1:
        sum = sum + num;

    case 2:
        sum = sum + num;

    case 3:
        sum = sum + num;

    case 4:
        sum = sum + num;

    case 5:
        sum = sum + num;

    case 6:
        sum = sum + num;

    case 7:
        sum = sum + num;

    case 8:
        sum = sum + num;

    case 9:
        sum = sum + num;

    case 10:
        sum = sum + num;

    default:
        printf("Introduza um numero entre 1 e 10");
    }

    printf("\n\nResultado: %d", sum);

    return 0;
}
