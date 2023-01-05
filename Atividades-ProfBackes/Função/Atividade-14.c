/*Fac¸a uma func¸ao que receba a dist ˜ ancia em ˆ Km e a quantidade de litros de gasolina
consumidos por um carro em um percurso, calcule o consumo em Km/l e escreva uma
mensagem de acordo com a tabela abaixo:*/

#include <stdio.h>
#include <stdlib.h>

void consumo(float x, float y){
    float cns;
    cns = x/y;
    if(cns<8){
        printf("Venda o carro!");
    }
    else if(cns>=8 && cns<=14){
        printf("Econômico!");
    }
    else{
        printf("Super econômico!");
    }
}

int main() {
    float distancia, litros;
    printf("Digite a distância do percurso: ");
    scanf("%f", &distancia);
    printf("Digite a quantidade de litros de gasolina: ");
    scanf("%f", &litros);
    consumo(distancia, litros);
}