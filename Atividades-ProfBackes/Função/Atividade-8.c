/*Sejam a e b os catetos de um triangulo, onde a hipotenusa ˆ e obtida pela equac¸ ´ ao: ˜
hipotenusa = √a2 + b2. Fac¸a uma func¸ao que receba os valores de ˜ a e b e calcule o
valor da hipotenusa atraves da equac¸ ´ ao.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int hipotenusa(int a, int b){
    int hipo;
    hipo = sqrt((pow(a,2)+pow(b,2)));
    return hipo;
}

int main() {
    int a, b;
    printf("Digite o valor dos catetos 'a' e 'b': ");
    scanf("%d %d", &a, &b);
    printf("A hipotenusa do triângulo eh: %d \n", hipotenusa(a,b));
}