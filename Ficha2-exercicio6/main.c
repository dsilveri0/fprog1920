#include <stdio.h>
#include <stdlib.h>

#define salBase 600.00
#define perVend 1.50
#define perCarroVend 100

int main() {
	float nCarros, volFaturado, soma, carroVend, fatVenda;

	printf("Indique o numero de carros vendidos: ");
	scanf("%f", &nCarros);

	printf("\nIndique o volume faturado: ");
	scanf("%f", &volFaturado);

	carroVend = nCarros * perCarroVend;
	fatVenda = volFaturado * (perVend*0.01);
	soma = salBase + fatVenda + carroVend;

	printf("VENCIMENTO:\n");
	printf("Salario Base:\t\t\t\t\t%.2f\n", salBase);
	printf("Por Carro Vendido: \t\t\t\t%.2f\n", carroVend);
	printf("%.2f %% das Vendas Faturadas: \t\t\t%.2f", perVend, fatVenda);
	printf("\n\t\t\t\t\t\t-------------\n");
	printf("TOTAL:\t\t\t\t\t\t%.2f\n", soma);

	return 0;
}
