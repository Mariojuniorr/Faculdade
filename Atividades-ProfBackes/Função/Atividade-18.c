/*Fac¸a uma func¸ao que receba por par ˜ ametro dois valores ˆ X e Z. Calcule e retorne o
resultado de XZ para o programa principal. Atenc¸ao n ˜ ao utilize nenhuma func¸ ˜ ao pronta ˜
de exponenciac¸ao. */
#include <stdio.h>
#include <stdlib.h>

int potencia(int x, int z){
    int aux=x;
    for(int i=1; i<z; i++){
        aux *= x;
    }

    return aux;
}

int main(){
    int x,z;
    scanf("%d %d", &x, &z);
    printf("A potenciação dos dois números eh %d \n", potencia(x,z));
}