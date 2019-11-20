#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, sum;

    printf("Indique quantos numeros quer somar.\n");
    scanf("%d", &num);

    sum = num*(num+1)/2;
    printf("%d", sum);

    return 0;
}
