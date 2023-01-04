#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int N;
    float E, aux, fat;

    scanf("%i",&N);

    for (fat=1; N > 1; N--)
    {
        fat *= N;
        E += 1/fat;
    }

    printf("%f \n", E);
}