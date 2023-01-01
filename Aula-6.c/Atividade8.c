#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int matA[3][3], v[3], i, j, resultado[3];

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Digite o valor da matriz[%d][%d]: ", i+1, j+1);
            scanf("%d", &matA[i][j]);
        }
    }

    for(i=0; i<3; i++){
        printf("Digite o valor do vetor[%d]: ", i+1);
        scanf("%d", &v[i]);
    }

    for(i=0; i <= 3-1; i++){
        resultado[i] = 0;
            for(j=0; j <= 3-1; j++){
                resultado[i] += matA[i][j] * v[j];
            }
        }
    
    for(i=0; i<=3-1; i++)
        printf("%d  \n", resultado[i]);


    return 0;
}