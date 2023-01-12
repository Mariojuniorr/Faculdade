/*Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
enderec¸o de cada posic¸ao desse array*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float *vetor=(float*) malloc(10*sizeof(float));
    for(int i=0; i<10; i++)
        printf("%d \n", &vetor[i]);
}