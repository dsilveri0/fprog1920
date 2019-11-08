#include <stdio.h>
#include <stdlib.h>

int le_numero(void);
int ler_segundo(void); // validacao (entre 0 e 59)
int ler_minuto(void); // validacao (entre 0 e 59)
int ler_hora(void); // validacao (entre 0 e 23)
int converte_em_segundo(int, int, int);

int main() {
    int num;

    num = le_numero();
    printf("\n%d\n", num);

    return 0;
}

/*
    Implementar uma funcao le numero que recebe 2 parametros, limite inferior e limite superior.
    A função tem um ciclo do while que valida que o numero introduzido está entre os limites.
    Caso implemente a função não são necessárias as funções ler_segundo, ler_numero e ler_hora.
*/

int le_numero(void) {
    int num;

    do {
        printf("\nIntroduza um numero inteiro: ");
        scanf("%d", &num);
    } while(num <= 0);

    return num;
}


