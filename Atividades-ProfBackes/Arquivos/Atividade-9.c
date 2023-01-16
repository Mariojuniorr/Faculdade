/*Fac¸a um programa que permita que o usuario entre com diversos nomes e telefone para ´
cadastro, e crie um arquivo com essas informac¸oes, uma por linha. O usu ˜ ario finaliza a ´
entrada com ‘0’ para o telefone.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *arq = fopen("telefones.txt", "w");
    char telefone[20];
    do{
        printf("Digite o numero do telefone ou 0 para sair: ");
        scanf("%s", &telefone);
        fprintf(arq, "%s \n", telefone);
    }while(telefone[0] != '0');
}