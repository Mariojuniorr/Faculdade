/*Escreva um programa que leia o nome de um arquivo texto. Em seguida apresente na tela quantas linhas o arquivo possui.*/

#include <stdio.h>
#include <stdlib.h>


int main(){
    char texto[300];
    int count=0;
    FILE *arq = fopen("textoxlinhas.txt", "r");
    if(arq == NULL){
        printf("Erro na abertura do arquivo!");
        return 1;
    }

    while(fgets(texto, 300, arq) != NULL){
        count++;
    }

    printf("%d linhas", count);
    

    fclose(arq);
}