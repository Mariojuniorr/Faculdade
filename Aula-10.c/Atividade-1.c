/*EXERCÍCIO 1
Crie um programa que contenha um vetor estático e um vetor dinâmico 
de float contendo 10 elementos cada. Imprima o endereço e o conteúdo de cada posição
 desses vetores. */


#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int vE[5] = {1, 2, 3, 4, 5};
    void* vD = (malloc(sizeof(float)));
    
    for(i=0; i<5; i++){
        vD = &vE[i];
        printf("O endereço da vetor estático %d eh: %d \n", vE[i], vD);
    }
    
    return 0;
} 