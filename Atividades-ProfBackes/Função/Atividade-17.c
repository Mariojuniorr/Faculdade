/*Fac¸a uma func¸ao que receba dois n ˜ umeros inteiros positivos por par ´ ametro e retorne a ˆ
soma dos N numeros inteiros existentes entre eles.*/

#include <stdio.h>
#include <stdlib.h>

int soma(int x, int y){
    int aux;
    if(x<y){
        for(aux=0 ; x<=y; x++){
            aux += x;
        }
    }
    else if(y<x){
        for(aux=0 ; y<=x; y++){
            aux += y;
        }
    }

    return aux;
}

int main(){
    int x, y;
    scanf("%d", &x, &y);
    printf("A soma dos numeros entre eles eh %d \n", soma(x,y));
}