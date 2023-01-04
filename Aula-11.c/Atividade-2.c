/*Escreva um programa que faça uso das funções gets, fgets, strcpy, strcat, strlen e strstr. Execute o programa em modo de depuração (debug).*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char str1[20], str2[20];
    gets(str1);
    fgets(str2, 20);
    printf("%s", str1);
    printf("%s", str2);

    strcpy(str2, str1);
    printf("%s", str2);

    printf("%d", strlen(str2));

    
}