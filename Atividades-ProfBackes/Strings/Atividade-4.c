/*. fac¸a um programa que leia um nome e imprima as 4 primeiras letras do nome*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome[20];
    gets(nome);
    for(int i=0; i<4 ;i++)
        printf("%c", nome[i]);
}