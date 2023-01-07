/*. Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
Imprima o enderec¸o de cada posic¸ao dessa matriz.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float vetor[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++)
            printf("%d \n", &vetor[i][j]);
    }
}