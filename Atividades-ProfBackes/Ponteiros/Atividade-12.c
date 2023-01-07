/*. Fac¸a um programa que leia tres valores inteiros e chame uma func¸ ˆ ao que receba estes 3 ˜
valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variavel, ´
o segundo menor valor na variavel do meio, e o maior valor na ´ ultima vari ´ avel. A func¸ ´ ao˜
deve retornar o valor 1 se os tres valores forem iguais e 0 se existirem valores diferentes. ˆ
Exibir os valores ordenados na tela.*/

#include <stdio.h>
#include <stdlib.h>

int ordena(int x, int y, int z){
    if(x<y && y<z){
        return x,y,z;
    }

}

int main(){
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    printf("%d %d %d ", ordena(x,y,z));
}