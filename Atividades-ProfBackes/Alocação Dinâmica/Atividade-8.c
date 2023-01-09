/*Fac¸a um programa que leia uma quantidade qualquer de numeros armazenando-os na ´
memoria e pare a leitura quando o usu ´ ario entrar um n ´ umero negativo. Em seguida, ´
imprima o vetor lido. Use a func¸ao REALLOC.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *x=(int*) malloc(sizeof(int)), i=0, j;

    for(i=0; ; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &x[i]);
        x=(int*) realloc(x, (i+2)*sizeof(int));
        if(x[i]<0){break;}
    }

    for(int j=0; j<i; j++){
        printf("%d   ", x[j]);
    }

    free(x);
}