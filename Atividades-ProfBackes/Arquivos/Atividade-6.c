/*Fac¸a um programa que receba do usuario um arquivo texto. Crie outro arquivo texto ´
contendo o texto do arquivo de entrada, mas com as vogais substitu´ıdas por ‘*’. */
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arq = fopen("arq.txt", "r");
    FILE *arq2 = fopen("arq2.txt", "w");
    int count=0;
    if(arq == NULL || arq2 == NULL){
        printf("Erro na abertura do arquivo");
        exit(1);
    }

    while(1){
        if(feof(arq)){
            break;
        }
        char caractere = fgetc(arq);
        if(caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u'){
            caractere = '*';
        }
        fprintf(arq2, "%c", caractere);
    }

    fclose(arq);
    fclose(arq2);
}