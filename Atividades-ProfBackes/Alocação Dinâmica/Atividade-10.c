/*Fac¸a um programa que leia dois numeros N e M e: ´
• Crie e leia uma matriz de inteiros N x M;
• Localize os tres maiores n ˆ umeros de uma matriz e mostre a linha e a coluna onde ´
estao.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int **matriz, N, M;
    printf("Digite as duas dimensões da matriz: ");
    scanf("%d %d", &N, &M);
    
    matriz = (int**) malloc(N*sizeof(int*));
    for(int i=0; i<M; i++){
        matriz[i] = (int*) malloc(sizeof(int));
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            printf("Digite o valor da matriz[%d][%d]: ",i+1,j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    int aux;
    for(int i=1; i<N; i++){
        for(int j=1; j<M; j++){
            if(matriz[i][j]>matriz[i-1][j-1]){
                aux = matriz[i][j];
                matriz[i][j] = matriz[i-1][j-1];
                matriz[i-1][j-1] = aux;
            }
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            printf("%d   ", matriz[i][j]);
        }
    }
}