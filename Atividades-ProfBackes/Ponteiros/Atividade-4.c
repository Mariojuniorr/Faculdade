/*Fac¸a um programa que leia 2 valores inteiros e chame uma func¸ao que receba estas ˜
2 variaveis e troque o seu conte ´ udo, ou seja, esta func¸ ´ ao˜ e chamada passando duas ´
variaveis A e B por exemplo e, ap ´ os a execuc¸ ´ ao da func¸ ˜ ao, A conter ˜ a o valor de B e B ´
tera o valor de A.*/

#include <stdio.h>
#include <stdlib.h>

int troca(int x, int y){
    void *px, *py, *aux;
    px = &x;    
}

int main(){
    int x=1, y=2;
    printf("%d     ", x);
    printf("%d     ", y);
    
    troca(x,y);

    printf("%d     ", x);
    printf("%d     ", y);
}