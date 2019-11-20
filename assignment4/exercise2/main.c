#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0, cont = 0, num;
    char op;

    printf("Introduza um numero inteiro: ");
    scanf("%d", &num);

/*
    printf("Indique que tipo de estrutura de repeticao quer utilizar: \n");
    printf("while(w) | do..while(d) | for(f) \n");

    while (op != 'w' && op != 'd' && op != 'f') {
        scanf("%c", &op);
    }
*/

    do {
        printf("Indique que tipo de estrutura de repeticao quer utilizar: \n");

        if(op != 'w' && op != 'd' && op != 'f') {
            printf("while(w) | do..while(d) | for(f) \n");
            scanf("%c", &op);
        }

        switch(op) {
        case 'w':
        case 'W':
            while(cont <= num) {
                sum = sum + cont;
                cont = cont + 1;
            }
        break;
        case 'd':
        case 'D':
            do {
                sum = sum + cont;
                cont = cont + 1;
            } while(cont <= num);
        break;
        case 'f':
        case 'F':
            for(int i = 0; i<=num; i++) {
                sum = sum + i;
            }
        break;
        default:
            printf("Introduza uma operacao valida!");
        }

    } while (op != 'w' && op != 'd' && op != 'f');

    printf("\nSoma dos numeros inteiros de 1 ate %d igual a %d\n", num, sum);
    return 0;
}
