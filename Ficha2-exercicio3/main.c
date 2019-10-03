#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;

    printf("Introduza um numero real: ");
    scanf("%f", &num);

    printf("%.3f\n", num);
    printf("%+.3f\n", num);
    printf("%15.3f\n", num);
    printf("%015.3f\n", num);

    return 0;
}

