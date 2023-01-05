/*Fac¸a uma func¸ao que retorne o maior fator primo de um n ˜ umero.*/
#include <stdio.h>
#include <stdlib.h>

void primo(int x){
    int i, y;
    for(i=1; i<x; i++){
        if(x%i==0){
            printf("Eh primo! \n");
            exit(0);
        }
        else{
            printf("Não eh primo! \n");
            exit(0);
        }
    }
}

int main(){
    int x;
    printf("Digite um número: ");
    scanf("%d", &x);
    primo(x);
}