/*. Escreva um programa que contenha duas variaveis inteiras. Leia essas vari ´ aveis do ´
teclado. Em seguida, compare seus enderec¸os e exiba o conteudo do maior enderec¸o. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *px, *py;
    int x=2, y=1;
    px=&x;
    py=&y;
    if(px < py){
        printf("O conteúdo do maior endereço é %d \n", *px);
    }
    else{
        printf("O conteúdo do maior endereço é %d \n", *py);
    }

    return 0;
}