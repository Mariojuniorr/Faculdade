/*Fac¸a uma func¸ao que receba 3 n ˜ umeros inteiros como par ´ ametro, representando horas, ˆ
minutos e segundos, e os converta em segundos.*/


#include <stdio.h>
#include <stdlib.h>

int converte(int x, int y, int z){
    int total;
    total = x*60*60 + y*60 + z;
    return (total);
}

int main(){
    int horas, minutos, segundos;
    printf("Digite 3 numeros inteiros (horas; minutos; segundos): ");
    scanf("%d %d %d", &horas, &minutos, &segundos);

    printf("%d segundos \n", converte(horas, minutos, segundos));
}