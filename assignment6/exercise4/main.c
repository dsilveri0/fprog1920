#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 10
#define COLUNAS 10
#define MAX_ALEATORIO 100;

void iniciar_matriz(int [][COLUNAS]);
void mostrar_matriz(int [][COLUNAS]);
void pesquisar_numero(int [][COLUNAS], int);
int ler_numero(int, int);


int main() {
    int matriz[LINHAS][COLUNAS], valor;

    valor = ler_numero(0, 100);
    pesquisar_numero(matriz, valor);
    iniciar_matriz(matriz);
    mostrar_matriz(matriz);

    return 0;
}

int ler_numero(int lim_inf, int lim_sup) {
    int num;

    do {
	printf("\nIntroduza um numero: ");
	scanf("%d", &num);
    } while(num < lim_inf || num > lim_sup);

    return num;
}

void iniciar_matriz(int matriz[][COLUNAS]) {
    int num_aleatorio;
    srand(time(NULL));

    for(int i = 0; i < LINHAS; i++) {
    	for(int j = 0; j < COLUNAS; j++) {
	    num_aleatorio = rand() % MAX_ALEATORIO;
	    matriz[i][j] = num_aleatorio;
	}
    }
}

void mostrar_matriz(int matriz[][COLUNAS]) {
    for(int i = 0; i < LINHAS; i++) {
    	for(int j = 0; j < COLUNAS; j++) {
	    printf("\t%d\t", matriz[i][j]);
	}
	printf("\n\n");
    }
}

void pesquisar_numero(int matriz[][COLUNAS], int numero) {
    for(int i = 0; i < LINHAS; i++) {
    	for(int j = 0; j < COLUNAS; j++) {
	    if(matriz[i][j] == numero) {
	        printf("\nValor encontrado na linha %d - coluna %d\n", i, j);
	    } else {
		printf("\nValor não encontrado\n");
	    }
	}
    }
}
