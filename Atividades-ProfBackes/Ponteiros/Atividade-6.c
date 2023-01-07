/*. Elaborar um programa que leia dois valores inteiros (A e B). Em seguida fac¸a uma func¸ao˜
que retorne a soma do dobro dos dois numeros lidos. A func¸ ´ ao dever ˜ a armazenar o dobro ´
de A na propria vari ´ avel A e o dobro de B na pr ´ opria vari ´ avel B.*/

#include <stdio.h>
#include <stdlib.h>

int dobro(int x, int y){
    int *px, *py;
    px = &x;
    py = &y;
    return ((*px)*2+(*py)*2);
}


int main(){
    int A, B;
    scanf("%d %d", &A, &B);
    printf("A soma do dobro dos dois números é %d \n", dobro(A,B));
}