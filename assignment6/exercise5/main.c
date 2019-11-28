#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX_CARACTERES 20

int conta_vogais(char []);
void inverte_string(char [], char[]);
void retirar_espacos (char [], char[]);

int main() {
    char vetor_original[MAX_CARACTERES];
    //char vetor_invertido[MAX_CARACTERES] = {"\0"};
    //char vetor_sem_espacos[MAX_CARACTERES] = {"\0"};

    printf("\nIntroduza uma palavra: \n");
    scanf("%s", vetor_original);

    conta_vogais(vetor_original);

    return 0;
}

int conta_vogais(char vetor_original[MAX_CARACTERES]) {
    int len = 0, cont = 0;

    if(isalpha(vetor_original)) {
        len = strlen(vetor_original);
        printf("%d", len);

        for(int i = 0; i < len; i++) {
	    if(vetor_original[i] == 'a') {
	        printf("\nFound the letter A at position %d\n", i);
		cont++;
	    }
        }
    }

    return cont;
}
