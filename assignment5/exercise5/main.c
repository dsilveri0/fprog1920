#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float le_numero(void);
float area_triangulo(float, float);
float area_retangulo(float, float);
float area_quadrado(float);
float area_circulo(float);
char menu(int, int, int, int);
char confirmar_saida(void);


int main()
{
    int area = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    char op;

    op = menu(c1, c2, c3, c4);

    return 0;
}

char menu(int c1, int c2, int c3, int c4) {

int area = 0, lado, altura, comprimento, largura, raio, base;
char op;

    do {
        do {
            printf("\n\t\tCalculo de Areas \n\n");
            printf("Triangulo: %d\t\t\t\tRetangulo: %d\n\n", c1, c2);
            printf("Quadrado: %d\t\t\t\tCirculo: %d\n\n", c3, c4);
            printf("OPCOES \n\n");
            printf(" (T)riangulo\n (R)etangulo\n (Q)uadrado\n (C)irculo\n (F)im\n\n");
            printf("\tSelecione Opcao -> ");
            scanf(" %c", &op);
        } while(op != 't' && op != 'T' && op != 'r' && op != 'R' && op != 'f' && op != 'F' && op != 'q' && op != 'Q' && op != 'c' && op != 'C');

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

float le_numero(void) {
    int num;

    do {
        printf("Introduza um numero inteiro: ");
        scanf("%d", &num);
    } while(num <= 0);

    return num;
}

char confirmar_saida(void) {
    char resposta;

    printf("Quer mesmo sair? (S/N): ");
    scanf(" %c", &resposta);

    if (resposta == 'S' || resposta == 's')
        return 0;
    else
        menu(0, 0, 0, 0);
}

float area_triangulo(float base, float altura) {
    return (base * altura) / 2;
}

float area_retangulo(float largura, float comprimento) {
    return comprimento * largura;
}

float area_quadrado(float lado) {
    return lado * lado;
}

float area_circulo(float raio) {
    return 3.14 * sqrt(raio);
}
