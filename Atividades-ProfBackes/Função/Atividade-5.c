/*Fac¸a uma func¸ao e um programa de teste para o c ˜ alculo do volume de uma esfera. ´
Sendo que o raio e passado por par ´ ametro. ˆ
V = 4/3 ∗ π ∗ R3*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float volume(float x) {
    float v=0;
    v = (4 * 3.14159 * pow(x,3))/3;
    return v;
}

int main() {
    float raio;
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
    printf("O valor do volume da esfera eh: %0.2f centímetros cúbicos. \n", volume(raio));
    
    return 0;
}
