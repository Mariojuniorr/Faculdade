/*Fac¸a uma func¸ao que receba dois valores num ˜ ericos e um s ´ ´ımbolo. Este s´ımbolo representara a operac¸ ´ ao que se deseja efetuar com os n ˜ umeros. Se o s ´ ´ımbolo for + devera´
ser realizada uma adic¸ao, se for ˜ − uma subtrac¸ao, se for ˜ / uma divisao e se for ˜ ∗ sera´
efetuada uma multiplicac¸ao.*/

#include <stdio.h>
#include <stdlib.h>

void operacoes(char sinal, int x, int y){
    int aux;
    if(sinal=='+'){
        aux = x + y;
        printf("A soma dos números eh %d \n", aux);
    }
    else if(sinal=='-'){
        aux = x - y;
        printf("A subtração dos números eh %d \n", aux);
    }
    else if(sinal=='/'){
        aux = x / y;
        printf("A divisão dos números eh %d \n", aux);
    }
    else if(sinal=='*'){
        aux = x * y;
        printf("A multiplicação dos números eh %d \n", aux);
    }
    else{
        printf("\n Operação inválida! \n");
    }
}

int main(){
    int x, y;
    char sinal;
    printf("Digite o tipo de operação que você deseja fazer: ");
    scanf("%c", &sinal);
    printf("Agora, digite o primeiro e o segundo número que você quer calcular: ");
    scanf("%d %d", &x, &y);

    operacoes(sinal, x, y);
}