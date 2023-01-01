#include <stdio.h>
#include <stdlib.h>
#define TAM 10


int main(){
    int dados[TAM], i, j;
    for(i=0; i<TAM; i++){
        scanf("%d", &dados[i]);
            for(j=0; j<i; j++) {
                if(dados[i] == dados[j]){
                printf("O num %d foi digitado, digite um outro num: ", dados[i]); 
                i--;
                continue;
                }
            }
    }
}