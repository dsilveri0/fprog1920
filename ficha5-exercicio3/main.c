#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int le_numero(void);
int soma(int, int);
int subtracao(int, int);
float raiz_quadrada(int);
float potencia(int, int);


int main() {
    int num1, num2, sum, sub;
    float raiz1, raiz2, pow1, pow2;
    char op;

    do {
        num1 = le_numero();
        num2 = le_numero();

        do {
            printf("\n\n--- MENU DE OPERACOES --- \n\n");
            printf(" (T) TODAS\n (O) SOMA\n (U) SUBTRACAO\n (R) RAIZ QUADRADA\n (P) POTENCIA\n (S) SAIR\n\n");
            printf("\tOperacao -> ");
            scanf(" %c", &op);
        } while(op != 't' && op != 'T' && op != 'o' && op != 'O' && op != 'u' && op != 'U' && op != 'r' && op != 'R' && op != 'p' && op != 'P' && op != 's' && op != 'S');

        switch(op) {
            case 't':
            case 'T':
                sum = soma(num1, num2);
                printf("\n\nSoma = %d \n", sum);

                sub = subtracao(num1, num2);
                printf("Subtracao = %d \n", sub);

                raiz1 = raiz_quadrada(num1);
                raiz2 = raiz_quadrada(num2);
                printf("Raiz quadrada (%d) = %.2f\nRaiz quadrada (%d) = %.2f\n", num1, raiz1, num2, raiz2);

                pow1 = potencia(num1, num2);
                pow2 = potencia(num2, num1);
                printf("Potencia (%d, %d) = %.0f\nPotencia (%d, %d) = %.0f\n\n", num1, num2, pow1, num2, num1, pow2);

                break;
            case 'o':
            case 'O':
                sum = soma(num1, num2);
                printf("\nSoma = %d \n", sum);
                break;
            case 'u':
            case 'U':
                sub = subtracao(num1, num2);
                printf("\nSubtracao = %d \n", sub);
                break;
            case 'r':
            case 'R':
                raiz1 = raiz_quadrada(num1);
                raiz2 = raiz_quadrada(num2);
                printf("\nRaiz quadrada (%d) = %.2f\nRaiz quadrada (%d) = %.2f\n", num1, raiz1, num2, raiz2);
                break;
            case 'p':
            case 'P':
                pow1 = potencia(num1, num2);
                pow2 = potencia(num2, num1);
                printf("\nPotencia (%d, %d) = %.0f\nPotencia (%d, %d) = %.0f\n", num1, num2, pow1, num2, num1, pow2);
                break;
            case 's':
            case 'S':
                printf("\nA sair... \n");
                return 0;
                break;
            default:
                printf("Introduza uma operacao valida!");
        }

    } while(op != 's' || op != 'S');

    return 0;
}

int le_numero(void) {
    int num;

    do {
        printf("\nIntroduza um numero inteiro: ");
        scanf("%d", &num);
    } while(num <= 0);

    return num;
}

int soma(int num1, int num2) {
    int soma;

    soma = num1 + num2;

    return soma;
}

int subtracao(int num1, int num2) {
    int subtracao;

    subtracao = num1 - num2;

    return subtracao;
}

float raiz_quadrada(int num) {
    float raiz;

    raiz = sqrt(num);

    return raiz;
}

float potencia(int num1, int num2) {
    float potencia;

    potencia = pow(num1, num2);

    return potencia;
}
