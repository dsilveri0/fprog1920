#include <stdio.h>
#include <stdlib.h>

int le_numero(void);
int ciclo_while(int);
int ciclo_dowhile(int);
int ciclo_for(int);
char menu_opcoes(void);
char confirmar_saida(void);

int main()
{
    int sum = 0, num;
    char op;

    do {
        num = le_numero();
        do {
            printf("Menu de opcoes \n\n");
            printf(" (W) ciclo while\n (D) ciclo do...while\n (F) ciclo for\n (S) sair\n\n");
            printf("\tOpcao -> ");
            scanf(" %c", &op);
        } while(op != 'w' && op != 'W' && op != 'd' && op != 'D' && op != 'f' && op != 'F' && op != 's' && op != 'S');

        switch(op) {
            case 'w':
            case 'W':
                sum = ciclo_while(num);
                printf("A soma dos numeros de 1 ate %d deu: %d \n", num, sum);
                break;
            case 'd':
            case 'D':
                sum = ciclo_dowhile(num);
                printf("A soma dos numeros de 1 ate %d deu: %d \n", num, sum);
                break;
            case 'f':
            case 'F':
                sum = ciclo_for(num);
                printf("A soma dos numeros de 1 ate %d deu: %d \n", num, sum);
                break;
            case 's':
            case 'S':
                printf("A sair... \n");
                return;
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
        printf("Introduza um numero inteiro: ");
        scanf("%d", &num);
    } while(num <= 0);

    return num;
}

int ciclo_while(int num) {
    int sum = 0, cont = 0;

    while(cont <= num) {
        sum = sum + cont;
        cont = cont + 1;
    }

    return sum;
}

int ciclo_dowhile(int num) {
    int sum = 0, cont = 0;

    do {
        sum = sum + cont;
        cont = cont + 1;
    } while(cont <= num);

    return sum;
}

int ciclo_for(int num) {
    int sum = 0, cont = 0;

    for(int i = 0; i<=num; i++) {
        sum = sum + i;
    }

    return sum;
}
