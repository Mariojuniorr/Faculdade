/*Crie um programa que contenha uma func¸ao que permita passar por par ˜ ametro dois ˆ
numeros inteiros A e B. A func¸ ´ ao dever ˜ a calcular a soma entre estes dois n ´ umeros e ´
armazenar o resultado na variavel A. Esta func¸ ´ ao n ˜ ao dever ˜ a possuir retorno, mas dever ´ a´
modificar o valor do primeiro parametro. Imprima os valores de A e B na func¸ ˜ ao principal.*/

#include <stdio.h>
#include <stdlib.h>

void soma(int A, int B, int aux){
    aux = A + B;
}

int main(){
    int x, y, aux;
    scanf("%d %d", &x, &y);
    soma(x, y, aux);
    printf("A soma dos números é %d \n", aux);
}