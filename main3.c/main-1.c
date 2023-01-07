//Nome: Otavio Rochael Cunha. Matricula: 12211BSI218
//Nome: Mário Lúcio Santos Júnior. Matricula: 12211BSI252

#include <stdio.h>
#include <stdlib.h>

float imc (float m, float h) {
    float imc = m/(h*h);
    return imc;
}

int main () {
    float m, h;
    printf("Digite a massa em quilogramas: ");
    scanf ("%f", &m);
    printf("Digite a altura em metros: ");
    scanf ("%f", &h);

    printf("O IMC eh: %0.3f \n", imc(m, h));

    return 0;
}