/*Escreva um programa que leia o nome de um arquivo texto. Em seguida apresente na tela quantas linhas o arquivo possui.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char texto[300];
    FILE *arq = fopen("arquivo.txt", "w");
    if(arq == NULL){
        printf("Erro na abertura do arquivo!");
        return 1;
    }
    printf("Digite um texto para o arquivo: ");
    scanf("%d", &texto);
    fprintf(arq, texto);

    while (fread(&texto, sizeof(100*(char)),1,arq));
    {
        /* code */
    }
    

    close(arq);
}