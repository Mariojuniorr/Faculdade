/*Escreva um programa que leia primeiro os 6 numeros gerados pela loteria e depois os 6 ´
numeros do seu bilhete. O programa ent ´ ao compara quantos n ˜ umeros o jogador acertou. ´
Em seguida, ele aloca espac¸o para um vetor de tamanho igual a quantidade de numeros ´
corretos e guarda os numeros corretos nesse vetor. Finalmente, o programa exibe os ´
numeros sorteados e os seus n ´ umeros corretos.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *loteria=(int*) malloc(6*sizeof(int)), *jogador=(int*) malloc(6*sizeof(int)), *acertos=(int*) malloc(6*sizeof(int)), aux=0;
    printf("Digite os números sorteados: ");
    for(int i=0;i<6; i++){
        scanf("%d", &loteria[i]);
    }
    printf("Digite o seu jogo: ");
    for(int i=0;i<6; i++){
        scanf("%d", &jogador[i]);
    }

    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
        if(loteria[i]==jogador[j]){
            acertos[i]=jogador[j];
            aux++;
            }
        }
    }

    printf("Tiveram %d acertos: ", aux);
    for(int i=0; i<6; i++){
        if(acertos[i]!=0){
            printf("%d ", acertos[i]);
        }
    }
    free(loteria);
    free(jogador);
    free(acertos);
    printf("\n");
}