/*Considere a seguinte declaração: float a, *b, **c, ***d; Escreva um programa que leia
a variável *a* do teclado e calcule e exiba o dobro, o triplo e o quádruplo desse valor
utilizando apenas os ponteiros *b*, *c* e *d*. O ponteiro b deve ser usado para calcular o dobro, c, o triplo, e d, o quádruplo.
Faça b apontar para a, c para b, e d para c.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, *b, **c, ***d;
    
    printf("Digite um valor: ");
    scanf("%f", &a);
    
    b = (float*) malloc(sizeof(float));
    b = &a;
    *b += a;
    printf("O dobro de %f eh %f \n", a, *b);
    c = (float*) malloc(sizeof(float*));
    **c = b + a;
    printf("O triplo de %f eh %f \n", a, **c);
    d = (float*) malloc(sizeof(float**));
    ***d = **c + a;
    printf("O quádruplo de %f eh %f \n", a, ***d);
    
    free(b);
    free(*c);
    free(**d);
    
    return 0;
}
