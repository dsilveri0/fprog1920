#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch1, ch2;

    printf("Escreva 2 caracteres.\n");
    scanf("%c %c", &ch1, &ch2);

    printf("Introduziu os caracteres de codigo ASCII <%d> e <%d>", ch1, ch2);

    return 0;
}
