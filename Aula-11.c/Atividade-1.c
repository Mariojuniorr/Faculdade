/*Escreva um programa que leia uma string e converta todos os seus caracteres em caracteres maiúsculos. 
Imprima a string convertida. Dica: subtrair 32 dos caracteres cujo código ASCII estiverem entre 97 e 122.*/

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main(){
    char str[200];
    printf("Digite um texto: ");
    gets(str);

    for(int i=0; str[i] != '\0'; i++){
        str[i] -= 32;
    }
 
    printf("%s", str);

    return 0;
}