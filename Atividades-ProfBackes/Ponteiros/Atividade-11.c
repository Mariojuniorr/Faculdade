/*Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array
do teclado e imprima o enderec¸o das posic¸oes contendo valores pares.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p=(int*) malloc(5*(sizeof(int))), aux;
    for(int i=0; i<5; i++){
        scanf("%d", &p[i]);
    }

    for(int i=0; i<5; i++){
        if(p[i]%2==0){
            printf("O endereço do vetor[%d] é %d \n", i+1, &p[i]);
        }
    }
}