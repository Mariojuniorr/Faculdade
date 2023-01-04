/*Crie um programa que:
(a) Aloque dinamicamente um array de 5 numeros inteiros, ´
(b) Pec¸a para o usuario digitar os 5 n ´ umeros no espac¸o alocado, ´
(c) Mostre na tela os 5 numeros, ´
(d) Libere a memoria alocada. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*) malloc(5*sizeof(int));
    
    for(int i=0; i<5; i++){
        scanf("%d", &ptr[i]);
    }

    printf("\n");

    for(int i=0; i<5; i++){
        printf("%d \n", ptr[i]);
    }

    free(ptr);
}
    
