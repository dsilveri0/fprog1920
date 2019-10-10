#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    float res;
    char op;

    printf("Numero 1: ");
    scanf("%d", &num1);

    printf("Numero 2: ");
    scanf("%d", &num2);

    printf("\nIntroduza uma operacao aritmetica: ");
    scanf(" %c", &op);

    switch (op) {
    case '+':
        res = num1 + num2;
        printf("Resultado: %.0f", res);
        break;
    case '-':
        printf("Subtracao: %.0f", res);
        break;
    case '*':
        printf("Multiplicacao");
        break;
    case '/':
        printf("Divisao");
        break;
    case '%':
        printf("Resto da divisao inteira");
        break;
    default:
        printf("Operador desconhecido!");
    }

    return 0;
}
