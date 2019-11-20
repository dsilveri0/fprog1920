#include <stdio.h>
#include <stdlib.h>

#define NUM_MAX_ALUNOS 120

int le_numero(int, int);
int menu_opcoes(void);
void ler_notas_alunos(int[], int);
void mostrar_notas_alunos(int[], int);

int main() {
    int notas_estudantes[NUM_MAX_ALUNOS];
    int num_estudantes;

    printf("Introduza um numero de estudantes para ler notas: ");
    num_estudantes = le_numero(0, 120);

    printf("\nIntroduza as notas dos alunos.\n");
    ler_notas_alunos(notas_estudantes, num_estudantes);

    printf("\n\nNotas dos estudantes:\n");
    mostrar_notas_alunos(notas_estudantes, num_estudantes);

    return 0;
}

int menu_opcoes(void) {

int op;

    do {
        do {
            printf("\n\t\----- Menu de Opcoes -----\n\n");
            printf(" 1 - Registar notas dos estudantes\n");
            printf(" 2 - Mostrar notas\n");
            printf(" 3 - Mostrar media das notas\n");
            printf(" 4 - Mostrar notas positivas\n");
            printf(" 5 - Mostrar notas negativas\n");
            printf(" 6 - Mostrar nota mais alta e nota mais baixa\n");
            printf(" 0 - Sair\n");
            printf("\tSelecione Opcao -> ");
            scanf(" %d", &op);
        } while(op != 1 && op != 2 && op != 3 && op != 4 && op != 5 && op != 6 && op != 0);

        switch(op) {
            case 't':
            case 'T':
                base = le_numero();
                altura = le_numero();
                area = area_triangulo(base, altura);
                c1 = c1 + 1;
                printf("A area deu: %d \n", area);
                break;
            case 'r':
            case 'R':
                largura = le_numero();
                comprimento = le_numero();
                area = area_retangulo(largura, comprimento);
                c2 = c2 + 1;
                printf("A area deu: %d \n", area);
                break;
            case 'q':
            case 'Q':
                lado = le_numero();
                area = area_quadrado(lado);
                printf("A area deu: %d \n", area);
                c3 = c3 + 1;
                break;
            case 'c':
            case 'C':
                area = le_numero();
                area = area_circulo(raio);
                printf("A area deu: %d \n", area);
                c4 = c4 + 1;
                break;
            case 'f':
            case 'F':
                printf("A sair... \n");
                confirmar_saida();
                break;
            default:
                printf("Introduza uma operacao valida!");
        }
    } while(op != 'f' && op != 'F');
}

int le_numero(int lim_inf, int lim_sup) {
    int num;

    do {
        scanf("%d", &num);
    } while(num < lim_inf || num > lim_sup);

    return num;
}

void ler_notas_alunos(int notas_estudantes[], int num_estudantes) {
    int i;

    for(i = 0; i<num_estudantes; i++) {
        printf("\n\nIntroduza a nota do %dº estudante: ", i+1);
        notas_estudantes[i] = le_numero(0, 20);
    }
}

void mostrar_notas_alunos(int notas_estudantes[], int num_estudantes) {
    int i;

    for(i = 0; i<num_estudantes; i++) {
        printf("A nota do %dº estudante foi: ", i+1);
        printf("%d\n", notas_estudantes[i]);
    }
}
