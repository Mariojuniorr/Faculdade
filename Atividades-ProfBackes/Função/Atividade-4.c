/*Fac¸a uma func¸ao para verificar se um n ˜ umero ´ e um quadrado perfeito. Um quadrado ´
perfeito e um n ´ umero inteiro n ´ ao negativo que pode ser expresso como o quadrado de ˜
outro numero inteiro. Ex: 1, 4, 9... */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void quadrado(int x){
    int i;
    for(i=0; i<=x; i++){
        if(pow(i,2)==x){
            printf("O número é um quadrado perfeito \n");
        }
    }
}

int main(){
    int num;
    printf("Digite um quadrado perfeito: ");
    scanf("%d", &num);
    quadrado(num);

    return 0;
}