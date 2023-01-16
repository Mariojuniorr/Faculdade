/*Fac¸a um programa que receba do usuario um arquivo texto e mostre na tela quantas ´
linhas esse arquivo possui.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char texto[300];
    int count=0;

    FILE *file = fopen("arq.txt", "r");
    if(file == NULL){
        printf("Erro na abertura do arquivo!");
        exit(1);
    }
    while(fgets(texto, 300, file) != NULL){
        count++;
    }
    printf("O texto tem %d linhas \n", count);
    
    fclose(file);
}