/*Crie um programa que calcula o comprimento de uma string (nao use a func¸ ˜ ao strlen).*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char frase[20];
    int i, aux=0;
    gets(frase);
    for(i=0; frase[i] != '\0'; i++) 
        aux++;
    
    printf("%d",aux);
    return 0;
}