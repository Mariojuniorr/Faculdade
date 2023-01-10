/*Escreva um programa que aloque dinamicamente uma matriz (de inteiros) de dimensoes ˜
definidas pelo usuario e a leia. Em seguida, implemente uma func¸ ´ ao que receba um ˜
valor, retorne 1 caso o valor esteja na matriz ou retorne 0 caso nao esteja na matriz.*/

#include <stdio.h>
#include <stdlib.h>

int retorna(int **matriz, int N){
    int x;
    printf("Digite um valor, para ver se ele está na matriz: ");
    scanf("%d", &x);

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(x==matriz[i][j]){
                return 1;
            }
            else{
                return 0;
            }
        }
    }
}

int main(){
    int N;
    printf("Digite as dimensões de uma matriz: ");
    scanf("%d", &N);

    int **matriz = (int**) malloc(N*sizeof(int*)), i, j;
    for (i = 0; i < N; i++ ) {
        matriz[i] = (int*) malloc (N * sizeof(int));
    }

    for (i = 0; i < N; i++ ) {
        for(j=0; j<N; j++){
            printf("Digite o número do vetor matriz[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("%d",retorna(matriz, N));
}