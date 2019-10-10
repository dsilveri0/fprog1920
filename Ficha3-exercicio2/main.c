#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linha1, linha2, linha3;

    printf("Introduza os 3 valores inteiros das linhas: ");
    scanf("%d%d%d", &linha1, &linha2, &linha3);

    if(abs(linha1 - linha2) < linha3 && linha3 < linha1 + linha2) {

        if(linha1 == linha2 && linha2 == linha3)
            printf("Triangulo Equilatero");

        else if(linha1 != linha2 && linha1 != linha3 && linha2 != linha3)
            printf("Triangulo Escaleno");

        else if(((linha1 == linha2) && linha1 != linha3) || ((linha1 == linha3) && linha1 != linha2) || ((linha2 == linha3) && linha2 != linha1))
            printf("Triangulo Isosceles");

    } else
        printf("Nao forma triangulo!");

    return 0;
}
