/*Faça um programa que receba dois arquivos do usuário, e crie um terceiro arquivo com
o conteúdo dos dois primeiros juntos (o conteúdo do primeiro seguido do conteúdo do
segundo).*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arq = fopen("arq.txt", "r");
    FILE *arq2 = fopen("arq2.txt", "r");
    FILE *arq4 = fopen("arq4.txt", "w");

    if(arq == NULL || arq2 == NULL || arq4 == NULL){
        printf("Erro na abertura do arquivo");
        exit(1);
    }

    while(1){
        if(feof(arq)){
            break;
        }
        char arqc1=fgetc(arq);
        fprintf(arq4, "%c", arqc1);
    }
    
    while(1){
        if(feof(arq2)){
            break;
        }
        char arqc2=fgetc(arq2);
        fprintf(arq4, "%c", arq2);
    }
    
    fclose(arq);
    fclose(arq2);
    fclose(arq4);
}