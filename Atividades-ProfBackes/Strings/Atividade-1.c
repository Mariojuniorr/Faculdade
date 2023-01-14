/*1. Fac¸a um programa que entao leia uma string e a imprima. ˜*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char frase[200];
    printf("Digite uma frase: ");
    gets(frase);
    fputs(frase, stdout);
}