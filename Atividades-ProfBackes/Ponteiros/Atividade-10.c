/*Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
apenas aritmetica de ponteiros, leia esse array do teclado e imprima o dobro de cada ´
valor lido.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p=(int*) malloc(5*(sizeof(int))), aux;
    for(int i=0; i<5; i++){
        scanf("%d", &p[i]);
    }

    for(int i=0; i<5; i++){
        aux = p[i]*2;
        printf("O dobro do vetor[%d] é %d \n", i+1, aux);
    }
}