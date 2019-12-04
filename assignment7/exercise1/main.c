#include <stdio.h>
#include <stdlib.h>

#define NUM_MAX_ALUNOS 10

typedef struct {
    int numero;
    char nome[50];
    int nota_final;
} t_aluno;

int ler_numero(int, int);
char menu_opcoes(void);
int * ler_dados_estudante(t_aluno[], int);
void mostrar_dados_estudantes(t_aluno[], int);
int confirmar_saida(void);

//float calcular_media_notas(int[], int);
//int calcular_nota_mais_alta(int[], int);
//int calcular_nota_mais_baixa(int[], int);
//void mostrar_notas_positivas(int[], int);
//void mostrar_notas_negativas(int[], int);

int main() {
    int /*notas_estudantes[NUM_MAX_ALUNOS],*/num_estudantes = 0,/* baixa, alta,*/ sum=0, limite = 0, cont = 0;
    t_aluno estudantes[NUM_MAX_ALUNOS];
    //float media;
    char op;
    t_aluno notas[NUM_MAX_ALUNOS];

    do {
	    op = menu_opcoes();

	    switch(op) {
            case '1':
		printf("Indique o numero de estudantes a inserir notas: ");

		sum += num_estudantes;
		limite = NUM_MAX_ALUNOS - sum;

		if(limite > 0) {
		    num_estudantes = ler_numero(0, limite);

		    printf("\nIntroduza abaixo as notas dos alunos.\n");

	    	    int *p;
		    p = ler_dados_estudante(estudantes, num_estudantes);

		    if(sum == 0){
			for(int i = 0; i<num_estudantes; i++) {
		            notas[i].nota_final = p[i];
		        }
		    } else {
			cont = 0;
		    	for(int i = sum; i<sum+num_estudantes; i++) {
			    notas[i].nota_final = p[cont];
			    cont++;
		        }
		    }

		} else
		    printf("\nOoops! Chegou ao limite! Nao pode introduzir mais estudantes.\n");

		break;
            case '2':
		printf("\n\tNotas dos estudantes que foram inseridas:\n");
    		if(sum == 0)
			mostrar_dados_estudantes(notas, num_estudantes);
		else
			mostrar_dados_estudantes(notas, sum+num_estudantes);

		break;
            case '3':
		printf("\n\tMedias das notas inseridas:\n");
		//media = calcular_media_notas(notas_estudantes, num_estudantes);
		//printf("%.1f", media);

		break;
            case '4':
		printf("\n\tNotas Positivas:\n");
		//mostrar_notas_positivas(notas_estudantes, num_estudantes);

		break;
	    case '5':
		printf("\n\tNotas Negativas:\n");
		//mostrar_notas_negativas(notas_estudantes, num_estudantes);

		break;
	    case '6':
		//baixa = calcular_nota_mais_baixa(notas_estudantes, num_estudantes);
		//printf("\nNota mais baixa: %d\n", baixa);

		//alta = calcular_nota_mais_alta(notas_estudantes, num_estudantes);
		//printf("\nNota mais alta: %d\n", alta);

		break;
            case '0':
                confirmar_saida();

                break;
            default:
                printf("Introduza uma opcao valida!");
       	    }

    } while(op != '0');


    return 0;
}

char menu_opcoes(void) {

    char op;

        do {
            printf("\n\t----- Menu de Opcoes -----\n\n");
            printf(" 1 - Registar notas dos estudantes\n");
            printf(" 2 - Mostrar notas\n");
            printf(" 3 - Mostrar media das notas\n");
            printf(" 4 - Mostrar notas positivas\n");
            printf(" 5 - Mostrar notas negativas\n");
            printf(" 6 - Mostrar nota mais alta e nota mais baixa\n");
            printf(" 0 - Sair\n");
            printf("\n\tSelecione uma opcao -> ");
            scanf(" %c", &op);
        } while(op != '1' && op != '2' && op != '3' && op != '4' && op != '5' && op != '6' && op != '0');

	return op;

}

int ler_numero(int lim_inf, int lim_sup) {
    int num;

    do {
	scanf("%d", &num);
    } while(num < lim_inf || num > lim_sup);

    return num;
}

int * ler_dados_estudante(t_aluno estudantes[], int num_estudantes) {
    int i;

    printf("\nIntroduza a nota do estudante: ");
    // ler numero, nome, e nota-final
    estudantes[0].nota_final = ler_numero(0, 20);


    return estudantes;
}

void mostrar_dados_estudantes(t_aluno estudantes[], int num_estudantes) {
    int i;
    for(i = 0; i<num_estudantes; i++) {
        printf("Nota do %dº estudante: ", i+1);
        printf("%d\n", estudantes[i]);
    }
}
/*
float calcular_media_notas(int notas_estudantes[], int num_estudantes) {
    float media, soma;


    for(int i = 0; i<num_estudantes; i++) {
    	soma = soma + notas_estudantes[i];
    }

    media = soma/num_estudantes;

    return media;

}

int calcular_nota_mais_alta(int notas_estudantes[], int num_estudantes) {
    int i, nota_mais_alta = 0;

    for(i = 0; i<num_estudantes; i++) {

	if(notas_estudantes[i]>nota_mais_alta){
	    nota_mais_alta = notas_estudantes[i];
	}
    }

    return nota_mais_alta;
}

int calcular_nota_mais_baixa(int notas_estudantes[], int num_estudantes) {
    int i, nota_mais_baixa = 21;

    for(i = 0; i<num_estudantes; i++) {

	if(notas_estudantes[i]<nota_mais_baixa){
	    nota_mais_baixa = notas_estudantes[i];
	}
    }

    return nota_mais_baixa;
}

void mostrar_notas_positivas(int notas_estudantes[], int num_estudantes) {
    int i;

    if(num_estudantes != 0) {
        for(i = 0; i<num_estudantes; i++){
            if(notas_estudantes[i]>=10) {
                printf("\n%i", notas_estudantes[i]);
            }
        }
    } else
	printf("Nao foram introduzidas notas de estudantes!");
}

void mostrar_notas_negativas(int notas_estudantes[], int num_estudantes) {
    int i;
    if(num_estudantes != 0) {
        for(i = 0; i<num_estudantes; i++){
            if(notas_estudantes[i]<10) {
                printf("\n%i", notas_estudantes[i]);
            }
        }
    } else
	printf("Nao foram introduzidas notas de estudantes!");

}
*/
int confirmar_saida(void) {
    char resposta;

    printf("\nQuer mesmo sair? (S/N): ");
    scanf(" %c", &resposta);

    if (resposta == 'S' || resposta == 's'){
	printf("A sair... \n");
        return 0;
    } else
	main();

    return 0;
}
