/*Fac¸a uma func¸ao que receba a data atual (dia, m ˜ es e ano em inteiro) e exiba-a na tela ˆ
no formato textual por extenso. Exemplo: Data: 01/01/2000, Imprimir: 1 de janeiro de
2000*/

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void imprime(int x, int y, int z){
    if(y == 1){
        printf("%d de janeiro de %d. \n", x, z);
    }
    else if(y == 2){
        printf("%d de fevereiro de %d. \n", x, z);
    }
    else if(y == 3){
        printf("%d de março de %d. \n", x, z);
    }
    else if(y == 4){
        printf("%d de abril de %d. \n", x, z);
    }
    else if(y == 5){
        printf("%d de maio de %d. \n", x, z);
    }
    else if(y == 6){
        printf("%d de junho de %d. \n", x, z);
    }
    else if(y == 7){
        printf("%d de julho de %d. \n", x, z);
    }
    else if(y == 8){
        printf("%d de agosto de %d. \n", x, z);
    }
    else if(y == 9){
        printf("%d de setembro de %d. \n", x, z);
    }
    else if(y == 10){
        printf("%d de outubro de %d. \n", x, z);
    }
    else if(y == 11){
        printf("%d de novembro de %d. \n", x, z);
    }
    else if(y == 12){
        printf("%d de dezembro de %d. \n", x, z);
    }
    else{
        printf("A data digitada eh inválida! \n");
    }
}

int main(){
    int dia, mes, ano;
    printf("Digite a data atual no formato xx/xx/xxxx: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    imprime(dia, mes, ano);
}