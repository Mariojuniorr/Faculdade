/*Fac¸a um programa que leia do usuario o tamanho de um vetor a ser lido e fac¸a a alocac¸ ´ ao˜
dinamica de mem ˆ oria. Em seguida, leia do usu ´ ario seus valores e mostre quantos dos ´
numeros s ´ ao pares e quantos s ˜ ao˜ ´ımpares.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    int *v=(int*) malloc(N*(sizeof(int))), par=0, impar=0;
    for(int i=0; i<N; i++){
        printf("Digite o %d° valor: ", i+1);
        scanf("%d", &v[i]);
        if(v[i]%2==0){
            par += 1;
        }
        else{
            impar += 1;
        }
    }

    printf("\nEntre os números que você digitou, %d são pares e %d são ímpares. \n", par, impar);

    free(v);
}