#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    printf("Digite a quantidade de elementos que você quer comparar: ");
    scanf("%d", &N);
    int vetor[N], i, aux;

    for(i=0; i<N; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    aux = vetor[0];
    for(i=1; i<N; i++){
        if(aux<vetor[i]){
            aux = vetor[i];
        }
    }

    printf("O maior valor eh: %d \n", aux);

    return 0;
}