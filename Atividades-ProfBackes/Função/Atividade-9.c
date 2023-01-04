/*Fac¸a umam func¸ao que receba a altura e o raio de um cilindro circular e retorne o volume ˜
do cilindro. O volume de um cilindro circular e calculado por meio da seguinte f ´ ormula: ´
V = π ∗ raio2 ∗ altura, onde π = 3.141592.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float volume(float h, float r){
    float V;
    V = 3.141592 * pow(r,2) * h;
    return V;
}

int main(){
    float h, r;
    printf("Digite o valor da altura e do raio, respectivamente: ");
    scanf("%f %f", &h, &r);

    printf("O volume do cilindro circuar eh: %f", volume(h, r));
}