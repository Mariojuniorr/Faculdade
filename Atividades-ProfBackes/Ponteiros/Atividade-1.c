/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe as variaveis aos ponteiros (use &). Modifique os valores de ´
cada variavel usando os ponteiros. Imprima os valores das vari ´ aveis antes e ap ´ os a ´
modificac¸ao. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int x=2; float y=5.89; char z='a';
    int *ptrx; float *ptry; char *ptrz;

    printf("%d    %0.2f    %c", x, y, z);
    ptrx = &x;
    *ptrx = 4;
    ptry = &y;
    *ptry = 6;
    ptrz = &z;
    *ptrz = 'b';
    printf("\n %d    %0.2f     %c", x, y, z);
    
    return 0;
}