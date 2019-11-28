#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX_CARACTERES 20

int conta_vogais(char []);
void inverte_string(char [], char[]);
void retirar_espacos (char [], char[]);

int main() {
    char vetor_original[MAX_CARACTERES] = {"\0"};
    char vetor_invertido[MAX_CARACTERES] = {"\0"};
    char vetor_sem_espacos[MAX_CARACTERES] = {"\0"};

    int vogais = 0;

    printf("\nIntroduza uma palavra: \n");
    fgets(vetor_original, MAX_CARACTERES, stdin);

    vogais = conta_vogais(vetor_original);
    printf("\nNº de vogais: %d\n", vogais);

    inverte_string(vetor_original, vetor_invertido);

    retirar_espacos(vetor_original, vetor_sem_espacos);

    return 0;
}

int conta_vogais(char vetor_original[MAX_CARACTERES]) {
    int len = 0, cont = 0;

    len = strlen(vetor_original);

    for(int i = 0; i < len; i++) {
        if(tolower(vetor_original[i]) == 'a' || tolower(vetor_original[i]) == 'e' || tolower(vetor_original[i]) == 'i' || tolower(vetor_original[i]) == 'o' || tolower(vetor_original[i]) == 'u') {
	    cont++;
	}
    }

    return cont;
}

void inverte_string(char vetor_original[MAX_CARACTERES], char vetor_invertido[MAX_CARACTERES]) {
   int len = 0;

   len = strlen(vetor_original);
   printf("\nTamanho do VETOR: %d\n", len);

   for(int i = len, j = 0; i >= 0 && j <= len; i--, j++) {
       vetor_invertido[j] = vetor_original[i];
       printf("%c", vetor_invertido[j]);
   }
}

void retirar_espacos(char vetor_original[MAX_CARACTERES], char vetor_sem_espacos[MAX_CARACTERES]) {
    int len = 0;

    len = strlen(vetor_original);
    printf("\n");

    for(int i = 0; i < len; i++) {
        if(isspace(vetor_original[i])) {
	    for(int j=i; j<len; j++) {
	        vetor_original[j] = vetor_original[j+1];
	    }
	len--;
	}
    }
    printf("\n%s\n", vetor_original);
}
