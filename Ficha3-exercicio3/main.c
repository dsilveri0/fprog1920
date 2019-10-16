#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mes;
    printf("Introduza um numero inteiro: ");
    scanf("%d", &mes);

    if(mes == 1)
        printf("janeiro");
    else if(mes == 2)
        printf("feveiro");
    else if(mes == 3)
        printf("marco");
    else if(mes == 4)
        printf("abril");
    else if(mes == 5)
        printf("maio");
    else if(mes == 6)
        printf("junho");
    else if(mes == 7)
        printf("julho");
    else if(mes == 8)
        printf("agosto");
    else if(mes == 9)
        printf("setembro");
    else if(mes == 10)
        printf("outubro");
    else if(mes == 11)
        printf("novembro");
    else if(mes == 12)
        printf("dezembro");
    else
        printf("mes inválido");

    /*switch (mes) {
    case 1:
        printf("janeiro");
        break;
    case 2:
        printf("fevereiro");
        break;
    case 3:
        printf("marco");
        break;
    case 4:
        printf("abril");
        break;
    case 5:
        printf("maio");
        break;
    case 6:
        printf("junho");
        break;
    case 7:
        printf("julho");
        break;
    case 8:
        printf("agosto");
        break;
    case 9:
        printf("setembro");
        break;
    case 10:
        printf("outubro");
        break;
    case 11:
        printf("novembro");
        break;
    case 12:
        printf("dezembro");
        break;
    default:
        printf("\nMes invalido!");
    }*/

    return 0;
}
