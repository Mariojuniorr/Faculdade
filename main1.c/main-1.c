#include <stdio.h>
#define TAM 20

int main(){
    float vetor[TAM], aux=0;

    int i;
    for(i=0; i<TAM; i++){
        scanf("%f", &vetor[i]);
    }
    
    for(i=0; i<TAM+1; i++){
        for(int j=i+1; j<TAM; j++){
        if(vetor[i]<vetor[j]){
            aux = vetor[j];
            vetor[j]=vetor[i];
            vetor[i]=aux;
            }
        }
    }

    for(i=-1; i<TAM-1; i++){
        printf("%f \n", vetor[i+1]);
    }
}