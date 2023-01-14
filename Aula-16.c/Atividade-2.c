/*Escreva uma função que calcule e retorne o número neperiano e, e = 2,71828183..., que é a base para os logaritmos naturais.A função deve ter como parâmetro o número de termos que serão somados, N. Note que quanto maior esse número, mais próxima do valor e estará da respostaUtilize a equação:*/

#include <stdio.h>
#include <stdlib.h>

long long int fatorial(int N){
    if (N==0 || N==1){
        return 1;
    }
    else{
        return N*fatorial(N-1);
    }
}

float calcula_e(int N){
    float e =0;
    for(int i=0; i <=N; i++){
        e = e + (float) fatorial(i);
    }
    return e;
}

int main(){
    float e = calcula_e(61);
    printf(" e = %f", e);
}