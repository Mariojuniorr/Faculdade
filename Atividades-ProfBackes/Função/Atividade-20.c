/*Fac¸a um algoritmo que receba um numero inteiro positivo ´ n e calcule o seu fatorial, n!.*/

#include <stdio.h>
#include <stdlib.h>

int fatorial(int x){
    int aux=1;
    for(int i=x; i>0; i--){
        aux *= i;
    }
}

int main(){
    int x;
    printf("Digite um número para fatorar: ");
    scanf("%d", &x);
    printf("%d \n", fatorial(x));

    return 0;
}