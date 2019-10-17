#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    float res;
    char op;

    printf("Numero 1: ");
    scanf("%d", &num1);

    printf("\nNumero 2: ");
    scanf("%d", &num2);

    printf("\nIntroduza uma operacao aritmetica: ");
    scanf(" %c", &op);

    switch (op) {
    case '+':
        res = num1 + num2;

        printf("Resultado: %.0f", res);
        break;
    case '-':
        res = num1 - num2;

        printf("Subtracao: %.0f", res);
        break;
    case 'x':
    case '*':
        res = num1 * num2;

        printf("Multiplicacao: %.0f", res);
        break;
    case ':':
    case '/':
        if(num2 != 0) {
            res = num1 / num2;
            printf("Divisao: %.1f", res);
        } else
            printf("Erro - Divisao por zero");
        break;
    case '%':
        res = num1 % num2;

        printf("Resto da divisao inteira: %0.f", res);
        break;
    default:
        printf("Operador desconhecido!");
    }

    return 0;
}
