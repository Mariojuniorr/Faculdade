#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, media, desviop;
    printf("Digite 10 valores: ");
    scanf("%f", &v1);
    scanf("%f", &v2);
    scanf("%f", &v3);
    scanf("%f", &v4);
    scanf("%f", &v5);
    scanf("%f", &v6);
    scanf("%f", &v7);
    scanf("%f", &v8);
    scanf("%f", &v9);
    scanf("%f", &v10);
    media = (v1 + v2 + v3 + v4 + v5 + v6 + v7 + v8 + v9 + v10) / 10;
    printf("O valor da MÉDIA é: %f \n", media);

    desviop = sqrt((pow(v1-media, 2) + pow(v2-media, 2) + pow(v3-media, 2) + pow(v4-media, 2) + pow(v5-media, 2)
     + pow(v5-media, 2) + pow(v6-media, 2) + pow(v7-media, 2) + pow(v8-media, 2) + pow(v9-media, 2) + pow(v10-media, 2)) / 10);

    printf("Já o DESVIO PADRÃO é: %f \n", desviop);

    return 0;
}