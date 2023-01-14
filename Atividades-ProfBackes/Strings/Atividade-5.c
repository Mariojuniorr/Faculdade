/*Digite um nome, calcule e retorne quantas letras tem esse nome.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome[20];
    gets(nome);
    printf("%d", strlen(nome));
}