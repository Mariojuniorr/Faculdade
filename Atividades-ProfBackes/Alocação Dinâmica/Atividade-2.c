/*Fac¸a um programa que leia do usuario o tamanho de um vetor a ser lido e fac¸a a alocac¸ ´ ao˜
dinamica de mem ˆ oria. Em seguida, leia do usu ´ ario seus valores e imprima o vetor lido. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    int *v=(int*) malloc(N*(sizeof(int)));
    for(int i=0; i<N; i++){
        printf("Digite o %d° valor: ", i+1);
        scanf("%d", &v[i]);
    }
    
    for(int i=0; i<N; i++)
        printf("%d \n", v[i]);

    free(v);
    return 0;
}