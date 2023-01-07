/*Escreva um programa que contenha duas variaveis inteiras. Compare seus enderec¸os e ´
exiba o maior enderec¸o.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *px, *py;
    int x, y;
    px=&x;
    py=&y;
    if(px < py){
        printf("O maior endereço é %d \n", px);
    }
    else{
        printf("O maior endereço é %d \n", py);
    }
    return 0;
}