/*Crie uma func¸ao que recebe como par ˜ ametro um n ˆ umero inteiro e devolve o seu dobro*/

#include <stdio.h>
#include <stdlib.h>

int dobra(int x){
    return x*2;
}

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    printf("O dobro é %d \n", dobra(num));
}