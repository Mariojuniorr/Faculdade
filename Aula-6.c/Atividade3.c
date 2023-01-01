#include <stdio.h>
#include <stdlib.h>
#define N 20

int main(){
    int vetorA[N], vetorB[N], aux, i, j=N-1;

    for(i=0; i<N; i++){
        printf("Digite o número %d do vetorA: ", i);
        scanf("%d", &vetorA[i]);
    }

    for(i=0; i<N; i++){
        aux = vetorA[j];
        vetorB[i] = vetorA[j];
        vetorB[i] = aux;
        j--;
    }

    for(i=0; i<N; i++)
        printf("O valor do vetorA eh: %d \n", vetorA[i]);
    
    printf("\n \n");
    for(i=0; i<N; i++)
        printf("O valor do vetorB eh: %d \n", vetorB[i]);

    return 0;
}