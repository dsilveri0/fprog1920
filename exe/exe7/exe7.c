#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;
    char order;

    printf("Introduza 3 numeros inteiros: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    printf("\nIndique a ordenacao (C)rescente ou (D)escrecente: ");
    scanf(" %c", &order);

    if(order == 'D' || order == 'd') {

	   	if(num1 > num2 && num2 > num3)
			printf("\n\nOrdenacao Decrescente: %d %d %d ", num1, num2, num3);

		else if(num1 > num3 && num3 > num2)
			printf("\n\nOrdenacao Decrescente: %d %d %d ", num1, num3, num2);

		else if(num2 > num1 && num1 > num3)
			printf("\n\nOrdenacao Decrescente: %d %d %d", num2, num1, num3);

		else if(num2 > num3 && num3 > num1)
			printf("\n\nOrdenacao Decrescente: %d %d %d", num2, num3, num1);

		else if(num3 > num1 && num1 > num2)
			printf("\n\nOrdenacao Decrescente: %d %d %d", num3, num1, num2);

		else if(num3 > num2 && num2 > num1)
			printf("\n\nOrdenacao Decrescente: %d %d %d", num3, num2, num1);


    } else if(order == 'C' || order == 'c'){

		if(num1 < num2 && num2 < num3)
			printf("\n\nOrdenacao Crescente: %d %d %d ", num1, num2, num3);

		else if(num1 < num3 && num3 < num2)
			printf("\n\nOrdenacao Crescente: %d %d %d ", num1, num3, num2);

		else if(num2 < num1 && num1 < num3)
			printf("\n\nOrdenacao Crescente: %d %d %d", num2, num1, num3);

		else if(num2 < num3 && num3 < num1)
			printf("\n\nOrdenacao Crescente: %d %d %d", num2, num3, num1);

		else if(num3 < num1 && num1 < num2)
			printf("\n\nOrdenacao Crescente: %d %d %d", num3, num1, num2);

		else if(num3 < num2 && num2 < num1)
			printf("\n\nOrdenacao Crescente: %d %d %d", num3, num2, num1);
    }

    return 0;
}
