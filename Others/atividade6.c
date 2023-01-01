#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float aceleracao, tempo, vinicial, vfinal;
    printf("Digite a velocidade inicial em m/s: ");
    scanf("%f", &vinicial);
    printf("Digite a velocidade final em m/s: ");
    scanf("%f", &vfinal);
    printf("Digite o intervalo de tempo em segundos: ");
    scanf("%f", &tempo);

    aceleracao = (vfinal - vinicial) / tempo;

    printf("A aceleração média é: %f m/s2\n", aceleracao);
}