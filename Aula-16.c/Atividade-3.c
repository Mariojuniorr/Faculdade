/*Crie uma função que receba uma matriz A alocada dinamicamente contendo 5 linhas e 5 colunas. Calcule na própria matriz A a sua transposta (se B é a matriz transposta de A, então A[i][j] = B[j][i])*/

#include <stdio.h>
#include <stdlib.h>

int aloca(int **matriz){
    int** matriz = malloc(5*sizeof(int*));
    for(int i=0; i<5; i++)
        matriz[i] = (int*) malloc(sizeof(int));

    return matriz;
}

int main(){
    int **matrizA, **matrizB, aux; 
    aloca(&matrizA); aloca(&matrizB);
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            scanf("%d", &matrizA[i][j]);
        }
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++)
            printf("%d", matrizA[i][j]);
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            aux = matrizB[j][i];
            matrizB[j][i] = matrizA[i][j];
            matrizB[i][j] = aux;
        }
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++)
            printf("%d", matrizA[i][j]);
    }
}