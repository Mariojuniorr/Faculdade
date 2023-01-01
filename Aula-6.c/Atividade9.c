#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int mat[3][3], i, j, aux=0;
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Digite o valor da mat[%d][%d]: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }

    i=0;
    for(j=0; j<3; j++){
        aux = aux + mat[i][j];
        i++;
    }

    i=0;
    for(j=2; j>=0; j--){
        aux += mat[i][j];
        i++;
    }

    printf("A soma da diagonal das matrizes eh %d \n", aux);

    return 0;
}