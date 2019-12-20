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
void eliminar_nota_estudante(t_aluno[], int);
float percentagem_notas_positivas(t_aluno[], int);
float media_notas(t_aluno[], int);
int nota_mais_baixa(t_aluno[], int);
int nota_mais_alta(t_aluno[], int);
int confirmar_saida(void);
int procurar_estudante(t_aluno[], int, int);
void gravar_dados_ficheiro(t_aluno[], int);
int ler_dados_ficheiro(t_aluno[]);

int main() {
    int num_estudantes = 0, baixa, alta;
    char op;
    float media, percentagem_positivas;
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
                printf("\nQual o numero do estudante a alterar nota: ");

                alterar_nota_estudante(estudantes, num_estudantes);

                break;
            case '4':
                printf("\n\tEstatisticas\n");

                percentagem_positivas = percentagem_notas_positivas(estudantes, num_estudantes);
                media = media_notas(estudantes, num_estudantes);
                baixa = nota_mais_baixa(estudantes, num_estudantes);
                alta = nota_mais_alta(estudantes, num_estudantes);

                printf("\nPercentagem de notas positivas e: %.1f %%", percentagem_positivas);
                printf("\nA media das notas e: %.2f", media);
                printf("\nA nota mais baixa e: %d", baixa);
                printf("\nA nota mais alta e: %d", alta);

                break;
            case '5':
                printf("\n\tGravar dados\n");

                gravar_dados_ficheiro(estudantes, num_estudantes);

                break;
            case '6':
                printf("\n\tLer dados\n");

                num_estudantes = ler_dados_ficheiro(estudantes);

                break;
            case '7':
                printf("\n\tQual o estudante que quer eliminar: \n");

                eliminar_nota_estudante(estudantes, num_estudantes);
                num_estudantes--;

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
            printf(" 5 - Gravar dados no ficheiro binario\n");
            printf(" 6 - Ler dados do ficheiro binario\n");
            printf(" 7 - Eliminar dados dos estudantes\n");
            printf(" 0 - Sair\n");
            printf("\n\tSelecione uma opcao -> ");
            scanf(" %c", &op);
        } while(op != '1' && op != '2' && op != '3' && op != '4' && op != '5' && op != '6' && op != '7' && op != '0');

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
    int flag = 0, numero;

    printf("\nIntroduza o numero do estudante: ");
    numero = ler_numero(2190000, 2199999);

    flag = procurar_estudante(alunos, num_estudantes, numero);

    if(flag == 0) {
        alunos[num_estudantes].numero = numero;

        printf("\nIndique o nome do estudante: ");
        scanf("%s", alunos[num_estudantes].nome);

        printf("\nIntroduza a nota final do estudante: ");
        alunos[num_estudantes].nota_final = ler_numero(0, 20);
    } else if(flag == 1) {
        printf("\nAluno ja registado.\n");
    }
}

int procurar_estudante(t_aluno alunos[], int num_estudantes, int num_aluno) {
    int i, flag=0;

    for(i = 0; i<num_estudantes; i++) {
    	if(alunos[i].numero == num_aluno) {
            flag = 1;
        }
    }
    return flag;
}

void mostrar_dados_estudantes(t_aluno alunos[], int num_estudantes) {
    int i;
    for(i = 0; i<num_estudantes; i++) {
        printf("\nNota do %d. estudante: ", i+1);
        printf("\nNumero: %d\n", alunos[i].numero);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Nota final: %d\n", alunos[i].nota_final);
    }
}

void alterar_nota_estudante(t_aluno alunos[], int num_estudantes) {
    int i, nova_nota = 0, numero, flag = 0;

    numero = ler_numero(2190000, 2199999);
    flag = procurar_estudante(alunos, num_estudantes, numero);

    if(flag == 1) {
        for(i = 0; i<num_estudantes; i++) {
            if(alunos[i].numero == numero) {
                printf("Nota atual: %d", alunos[i].nota_final);
                printf("\nInsira a nova nota: ");
                scanf("%d", &nova_nota);

                alunos[i].nota_final = nova_nota;
            }
        }
    } else if(flag == 0)
        printf("\nAluno nao registado!\n");
}

void eliminar_nota_estudante(t_aluno alunos[], int num_estudantes) {
    int i, numero, flag = 0;

    numero = ler_numero(2190000, 2199999);
    flag = procurar_estudante(alunos, num_estudantes, numero);

    if(flag == 1) {
        for(i = 0; i<num_estudantes; i++) {
            if((alunos[i].numero == numero) && (i != num_estudantes - 1)){
                for(int j = i; j<num_estudantes; j++){
                    alunos[j] = alunos[i-1]; // Verificar estas variáveis
                }
            }
        }
    } else if(flag == 0) {
        printf("\nAluno nao registado!\n");
    }
}

float percentagem_notas_positivas(t_aluno alunos[], int num_estudantes) {
    int i, contador_negativas = 0, contador_positivas = 0;
    float percentagem, resultado, contador_total = 0;

    for(i = 0; i<num_estudantes; i++) {
        if(alunos[i].nota_final < 10) {
            contador_negativas++;
        } else
            contador_positivas++;

        contador_total++;
    }

    resultado = contador_positivas/contador_total;
    percentagem = resultado * 100;

    return percentagem;
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
    int i, nota_mais_baixa = 20;

    for(i = 0; i<num_estudantes; i++) {
        if(alunos[i].nota_final<nota_mais_baixa) {
            nota_mais_baixa = alunos[i].nota_final;
        }
    }

    return nota_mais_baixa;
}

int nota_mais_alta(t_aluno alunos[], int num_estudantes) {
    int i, nota_mais_alta = 0;

    for(i = 0; i<num_estudantes; i++) {
        if(alunos[i].nota_final>nota_mais_alta) {
            nota_mais_alta = alunos[i].nota_final;
        }
    }

    return nota_mais_alta;
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

void gravar_dados_ficheiro(t_aluno alunos[], int num_estudantes) {
    FILE *ficheiro;

    ficheiro = fopen("dados.dat", "wb");

    if (ficheiro == NULL) {
        printf("Impossivel criar ficheiro.");
    } else {
        fwrite(&num_estudantes, sizeof(int), 1, ficheiro);
        fwrite(alunos, sizeof(t_aluno), num_estudantes, ficheiro);
    }

    fclose(ficheiro);
}

int ler_dados_ficheiro(t_aluno alunos[]) {
    FILE *ficheiro;
    int numero_elementos;

    ficheiro = fopen("dados.dat", "rb");

    if (ficheiro == NULL) {
        printf("Impossivel abrir ficheiro.");
    } else {
        fread(&numero_elementos , sizeof(int), 1, ficheiro);
        fread(alunos, sizeof(t_aluno), numero_elementos, ficheiro);
    }
        //fseek(ficheiro, 0L, SEEK_END);
        //printf("\n%d\n", ftell(ficheiro));

        //Fazer divisão entre ftell e o sizeof do vetor alunos

        //fread, 1º parametro recebe & quando é uma variavel normal.
        //(não leva & quando é um vetor na posição 1 nem qunado é o terceiro parametro não leva &.

    fclose(ficheiro);

return numero_elementos;
}
