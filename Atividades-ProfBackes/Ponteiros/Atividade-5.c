/*Fac¸a um programa que leia dois valores inteiros e chame uma func¸ao que receba estes ˜
2 valores de entrada e retorne o maior valor na primeira variavel e o menor valor na ´
segunda variavel. Escreva o conte ´ udo das 2 vari ´ aveis na tela.*/

#include <stdio.h>
#include <stdlib.h>

void funcao(int x, int y){
    int *px, *py;
    if(y<x){
        px = &x;
        py = &y;
    }
    else{
        px = &y;
        py = &x;
    }
    printf("O maior número é %d e o menor número é %d", *px, *py);
}

int main(){
    int x,y;
    scanf("%d %d", &x, &y);
    funcao(x, y);
}