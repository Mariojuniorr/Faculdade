//Nome: Otavio Rochael Cunha. Matricula: 12211BSI218
//Nome: Mário Lúcio Santos Júnior. Matricula: 12211BSI252

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    
    float soma=0.0;
    int N, X, Y, Z, escolha;
    printf("N: "); scanf("%d", &N);

    float ***cubo = (float***) malloc(N * sizeof(float**)); //x
    for(int i=0; i<N; i++){
        cubo[i] = (float**) malloc(N * sizeof(float*)); //y
        for(int j=0; j<N; j++){
            cubo[i][j] = (float*) malloc(N * sizeof(float)); //z
            for(int k=0; k<N; k++){
                scanf("%f", &cubo[i][j][k]);
            }
        }
    }

    printf("XY [1]\nXZ [2]\nYZ [3]\n");
    scanf("%d", &escolha);

    switch(escolha)
    {
    case 1: 
        printf("X: "); scanf("%d", &X);
        printf("Y: "); scanf("%d", &Y);
        for(int i=0; i<N; i++){
            soma += cubo[X][Y][i];
        }
        break;

    case 2: 
        printf("X: "); scanf("%d", &X);
        printf("Z: "); scanf("%d", &Z);
        for(int i=0; i<N; i++){
            soma += cubo[X][i][Z];
        }
        break;

    case 3: 
        printf("Y: "); scanf("%d", &Y);
        printf("Z: "); scanf("%d", &Z);
        for(int i=0; i<N; i++){
            soma += cubo[i][Y][Z];
        }
        break;
    }

    printf("Agregacao = %f", soma);
    
}