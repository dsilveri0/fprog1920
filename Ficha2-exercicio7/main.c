#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pe1Per 0.50
#define pe2Per 0.50
#define e1Per 0.65
#define e2Per 0.35
#define vPer 0.2
#define ctpPer 0.50
#define cpPer 0.50

int main()
{
    int pe1, pe2, e1, e2;
    float resultPE, sumPE, sumE, resultE, cFinal;

    printf("Componente TEORICO-PRATICA\n");
    printf("Classificacoes nas Provas Escritas (0;100)\n");

    printf("Introduza a nota na Prova Escrita1 (%.0f %%): ", pe1Per*100);
    scanf("%d", &pe1);

    printf("\nIntroduza a nota na Prova Escrita2 (%.0f %%): ", pe2Per*100);
    scanf("%d", &pe2);


    printf("\nComponente PRATICA\n");
    printf("Classificacoes nas Provas Escritas\n");

    printf("Introduza a nota na Entrega1 (%.0f %%): ", e1Per*100);
    scanf("%d", &e1);

    printf("\nIntroduza a nota na Entrega2 (%.0f %%): ", e2Per*100);
    scanf("%d", &e2);


    sumPE = (pe1*pe1Per)+(pe2*pe2Per);
    resultPE = sumPE*vPer;

    sumE = (e1*e1Per)+(e2*e2Per);
    resultE = sumE*vPer;


    printf("\nEPOCA DE AVALIACAO PERIODICA \n");
    printf("Componente Teorico-Pratica (%.0f %%): %.2f", ctpPer*100, resultPE);
    printf("\nComponente Pratica (%.0f %%):\t  %.2f ", cpPer*100, resultE);

    cFinal = (resultPE+resultE)/2;

    printf("\nCLASSIFICACAO FINAL: %.2f (%.0f Valores)\n\n", cFinal, round(cFinal));
    return 0;
}
