#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int matA[2][3], matB[2][3], matC[2][3], i, j;

    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("Digite o valor matA[%d][%d]: ", i+1, j+1);
            scanf("%d", &matA[i][j]);
        }
    }

    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("Digite o valor matB[%d][%d]: ", i+1, j+1);
            scanf("%d", &matB[i][j]);
        }
    }

    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            matC[i][j] = matA[i][j] + matB[i][j];  
            printf("%d  ", matC[i][j]);
        }
    }
    
    return 0;
}