/*Escreva um programa que leia um valor inteiro N maior que zero. Se o valor de N for inválido, o usuário deve digitar outro até que ele seja válido. Em seguida, crie uma matriz N por N alocada dinamicamente. Atribua o valor 1 para a diagonal principal e zero para as demais posições.Imprima a matriz.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    
    for(N=0 ; N<=0; N){
        printf("Digite um valor inteiro maior que zero: ");
        scanf("%d", &N);
        if(N<=0){
            printf("Erro! Algo ocorreu diferente do esperado!\n");
        }
    }
    
    int **v, i, j;

    v = (int**) malloc(N*sizeof(int*)); // Perguntar sobre se ponteiro "(int*)" seria a mesma coisa que "N*N*sizeof(int)", ou ocuparia mais espaço
    for (i = 0; i < N; i++ ) {
        v[i] = (int*) malloc (N * sizeof(int));
    }
    
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            if(j==i){
                v[i][j] = 1;
            }
            else{
                v[i][j] = 0;
            }
        }
    }
    
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            printf("%d    ", v[i][j]);
        }
        printf("\n");
    }
    return 0;
}