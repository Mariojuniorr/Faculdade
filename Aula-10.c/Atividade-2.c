/*Crie um programa que contenha um vetor de inteiros contendo cinco elementos.
 Utilizando apenas aritmética de ponteiros, leia esse vetor do teclado e 
 imprima o dobro de cada valor lido.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    float *v1 = (float*) malloc(5*sizeof(float));

    for(i=0; i<5; i++){
        printf("Digite o %d° valor: ", i+1);
        scanf("%f", &v1[i]);
        v1[i] = v1[i] * 2;
    }

    for(i=0; i<5; i++){
        printf("O dobro do %d° valor inserido eh %f  \n", i+1, v1[i]);
    }

    return 0;
}