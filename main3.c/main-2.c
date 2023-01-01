//Nome: Otavio Rochael Cunha. Matricula: 12211BSI218
//Nome: Mário Lúcio Santos Júnior. Matricula: 12211BSI252

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Escreva um programa que tenha uma função que calcule e retorne a soma dos primeiros n números inteiros elevados a sí próprios:
int potencia (int n){
    int potencia, aux=0;
    
    for(int i=1;i<=n;i++){
        potencia = pow(i, i);
        aux += potencia;
    }
    
    return aux;
}

int main(){
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("A soma dos primeiros N numeros inteiros elevados a si próprios eh %d \n", potencia(n));

    return 0;
}