/*Escreva um programa que:
(a) Crie/abra um arquivo texto de nome “arq.txt”
(b) Permita que o usuario grave diversos caracteres nesse arquivo, at ´ e que o usu ´ ario ´
entre com o caractere ‘0’
(c) Feche o arquivo
Agora, abra e leia o arquivo, caractere por caractere, e escreva na tela todos os caracteres armazenados.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char c;
    FILE *arq = fopen("arq.txt", "w");

    if(arq==NULL){
        printf("Erro na abertura do arquivo");
        exit(1);
    }

    while(c != '0'){
        c = getc(stdin);
        fputc(c, arq);
    }

    fclose(arq);
    return 0;
}