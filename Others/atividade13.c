#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int N, cont, aux, x, y;
    printf("Digite um número: ");
    scanf("%d", &N);

    x=0;
    y=1;
    printf("Na sequência de Fibonacci o %d° número é: \n", N);
    printf("%d \n", x);
    printf("%d \n", y);
    for(cont=3; cont<=N; cont++){
        aux = x + y;
        x = y;
        y = aux;
        printf("%d \n", aux);
    }
}