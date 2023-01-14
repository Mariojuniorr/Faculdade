/*Crie uma função que receba uma matriz A alocada dinamicamente contendo 5 linhas e 5 colunas. Calcule na própria matriz A a sua transposta (se B é a matriz transposta de A, então A[i][j] = B[j][i])*/

#include <stdio.h>
#include <stdlib.h>

void transpoe(int **matrizA){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++)
            printf("%d ", matrizA[j][i]);
        printf("\n");
    }
}

int main(){
    int **matrizA;
    matrizA = (int**) malloc(5*sizeof(int*));
    for(int i=0; i<5; i++){
        matrizA[i] = (int*) malloc(sizeof(int));
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            scanf("%d", &matrizA[i][j]);
        }
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++)
            printf("%d ", matrizA[i][j]);
        printf("\n");
    }

    printf("\n");
    transpoe(matrizA);
}