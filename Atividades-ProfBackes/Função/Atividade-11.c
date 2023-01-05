/*Escreva uma func¸ao que receba um n ˜ umero inteiro maior do que zero e retorne a soma ´
de todos os seus algarismos. Por exemplo, ao numero 251 corresponder ´ a o valor 8 (2 ´
+ 5 + 1). Se o numero lido n ´ ao for maior do que zero, o programa terminar ˜ a com a ´
mensagem “Numero inv ´ alido”.*/

#include <stdio.h>
#include <stdlib.h>

float medias(char m, float n1, float n2, float n3){
    float media;
    if(m=='A' || m=='a'){
        media = (n1 + n2 + n3)/3;
        return media;
    }
    else if(m=='P' || m=='p'){
        media = (5*n1 + 3*n2 + 2*n3) / 10;
        return media;
    }
    else{
        return 0;
    }
}

int main (){
    float n1, n2, n3;
    char m;
    printf("Digite 'A' para média aritmética e 'P' para ponderada: ");
    scanf("%c", &m);
    printf("Digite as três notas do aluno: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    printf("A média das notas eh: %0.2f", medias(m, n1, n2, n3));
}