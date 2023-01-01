/*Escreva um programa que mostre o tamanho em bytes que cada tipo de dados ocupa em memória (utilize a função sizeof()).
Responda: Os diferentes níveis de apontamento e tipo de dados dos ponteiros apresentam tamanhos diferentes? Explique.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%d bytes \n", sizeof(char));
    printf("%d bytes \n", sizeof(int));
    printf("%d bytes \n", sizeof(float));
    printf("%d bytes \n", sizeof(double));
    printf("%d bytes \n", sizeof(long double));

    return 0;
}

/*Os apontamentos têm diferentes níveis, como o 1° que aponta para uma memória,
o 2°, que aponta para uma memória de uma memória já alocada, e assim em diante... */
