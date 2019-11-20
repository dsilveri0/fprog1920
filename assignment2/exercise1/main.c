#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, dobro;

    printf("Introduza um numero\n");
    scanf("%d", &num);

    dobro = num*2;

    printf("Introduziu o numero %d.\n", num);
    printf("O dobro do numero introduzido e: %d", dobro);

    return 0;
}
