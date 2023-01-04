#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x, y, z;
    printf("Digite o primeiro número: ");
    scanf("%d", &x);
    printf("Digite o segundo número: ");
    scanf("%d", &y);
    printf("Digite o terceiro número: ");
    scanf("%d", &z);
    if ((x > y) && (y > z))
    {
        printf("Em ordem decrescente, os números são: %d, %d, %d \n", x, y, z);
    }

    if ((x > z) && (z > y)) {
        printf("Em ordem decrescente, os números são: %d, %d, %d \n", x, z, y);
    }

    if ((y > x) && (x > z)){
        printf("Em ordem decrescente, os números são: %d, %d, %d \n", y, x, z);
    }
    
    if ((y > z) && (z > x)){
        printf("Em ordem decrescente, os números são: %d, %d, %d \n", y, z, x);
    }

    if ((z > y) && (y > x)){
        printf("Em ordem decrescente, os números são: %d, %d, %d \n", z, y, x);
    }

    if ((z > x) && (x > y)){
        printf("Em ordem decrescente, os números são: %d, %d, %d \n", z, x, y);
    }
    
    if ((x == y) && (y == z)){
        printf("Em ordem decrescente, os números são: %d, %d, %d \n", x, y, z);
    }

    return 0;
}