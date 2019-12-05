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
void ler_dados_estudante(t_aluno[], int);
void mostrar_dados_estudantes(t_aluno[], int);
int confirmar_saida(void);

int main() {
    int num_estudantes = 0;
    char op;
    t_aluno estudantes[NUM_MAX_ALUNOS];

    do {
	    op = menu_opcoes();

	    switch(op) {
            case '1':
		printf("Indique o numero de estudantes a inserir notas: ");

                num_estudantes = ler_numero(0, NUM_MAX_ALUNOS);
                ler_dados_estudante(estudantes, num_estudantes);

		break;
            case '2':
		printf("\n\tNotas dos estudantes que foram inseridas:\n");

                mostrar_dados_estudantes(estudantes, num_estudantes);

                break;
            case '3':
		printf("\n\tMedias das notas inseridas:\n");

		break;
            case '4':
		printf("\n\tNotas Positivas:\n");

		break;
	    case '5':
		printf("\n\tNotas Negativas:\n");

		break;
	    case '6':

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

void ler_dados_estudante(t_aluno estudantes[], int num_estudantes) {
    t_aluno aluno;

    printf("\nIntroduza a nota do estudante: ");

    aluno.numero = ler_numero(219000, 219999);
    aluno.nota_final = ler_numero(0, 20);
    aluno.nome[50] = "Maria";

}

void mostrar_dados_estudantes(t_aluno estudantes[], int num_estudantes) {
    int i;
    for(i = 0; i<num_estudantes; i++) {
        printf("Nota do %dº estudante: ", i+1);
        printf("%d\n", estudantes[i].numero);
    }
}

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
