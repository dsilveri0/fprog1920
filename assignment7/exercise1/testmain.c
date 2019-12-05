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
void alterar_nota_estudante(t_aluno[], int);
float percentagem_notas_positivas(t_aluno[], int);
float media_notas(t_aluno[], int);
int nota_mais_baixa(t_aluno[], int);
int nota_mais_alta(t_aluno[], int);
int confirmar_saida(void);

int main() {
    int num_estudantes = 0;
    char op;
    t_aluno estudantes[NUM_MAX_ALUNOS];

    do {
	    op = menu_opcoes();

	    switch(op) {
            case '1':
		printf("Menu para inserir os dados do estudante\n");

                ler_dados_estudante(estudantes, num_estudantes);
		num_estudantes++;

		break;
            case '2':
		printf("\n\tDados dos estudantes inseridos:\n");

                mostrar_dados_estudantes(estudantes, num_estudantes);

                break;
            case '3':
		printf("\nQual o número do estudante a alterar nota: ");


		alterar_nota_estudante(estudantes, num_estudantes);

		break;
	    case '4':
		printf("\n\tEstatisticas\n");



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
            printf(" 1 - Registar dados dos estudantes\n");
            printf(" 2 - Mostrar dados dos estudantes\n");
            printf(" 3 - Alterar dados dos estudantes\n");
	    printf(" 4 - Estatisticas\n");
            printf(" 0 - Sair\n");
            printf("\n\tSelecione uma opcao -> ");
            scanf(" %c", &op);
        } while(op != '1' && op != '2' && op != '3' && op != '4' &&  op != '0');

	return op;

}

int ler_numero(int lim_inf, int lim_sup) {
    int num;

    do {
	scanf("%d", &num);
    } while(num < lim_inf || num > lim_sup);

    return num;
}

void ler_dados_estudante(t_aluno alunos[], int num_estudantes) {

    printf("\nIntroduza o numero do estudante: ");
    alunos[num_estudantes].numero = ler_numero(2190000, 2199999);

    printf("\nIndique o nome do estudante: ");
    scanf("%s", alunos[num_estudantes].nome);

    printf("\nIntroduza a nota final do estudante: ");
    alunos[num_estudantes].nota_final = ler_numero(0, 20);

}

void mostrar_dados_estudantes(t_aluno alunos[], int num_estudantes) {
    int i;
    for(i = 0; i<num_estudantes; i++) {
        printf("\nNota do %dº estudante: ", i+1);
        printf("\nNumero: %d\n", alunos[i].numero);
	printf("Nome: %s\n", alunos[i].nome);
	printf("Nota final: %d\n", alunos[i].nota_final);
    }
}

void alterar_nota_estudante(t_aluno alunos[], int num_estudantes) {
    int i, nova_nota = 0, numero;

    numero = ler_numero(2190000, 21999990);

    for(i = 0; i<num_estudantes; i++) {
    	if(alunos[i].numero == numero) {
	    printf("Aluno encontrado!\nNota atual: %d", alunos[i].nota_final);
	    printf("\nInsira a nova nota: ");
	    scanf("%d", &nova_nota);

	    alunos[i].nota_final = nova_nota;
	}
    }
}

float percentagem_notas_positivas(t_aluno alunos[], int num_estudantes) {

    return 0;
}

float media_notas(t_aluno alunos[], int num_estudantes) {
    float media, soma;

    for(int i = 0; i<num_estudantes; i++) {
    	soma = soma + alunos[i].nota_final;
    }

    media = soma/num_estudantes;

    return media;
}

int nota_mais_baixa(t_aluno alunos[], int num_estudantes) {

    return 0;
}

int nota_mais_alta(t_aluno alunos[], int num_estudantes) {

    return 0;
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
