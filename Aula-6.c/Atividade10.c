#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int mat[5][4], i, j, n;

    for(i=0; i<5; i++){
        for(j=0; j<4; j++){
            printf("Digite o valor mat[%d][%d]: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Informe a linha que será apresentada: ");
    scanf("%d",&n);

    for(j=0; j<4; j++){
        printf("%d  \n", mat[n][j]);
    }

    return 0;
}