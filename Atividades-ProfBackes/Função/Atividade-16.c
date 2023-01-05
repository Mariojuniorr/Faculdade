/*. Fac¸a uma func¸ao chamada DesenhaLinha. Ele deve desenhar uma linha na tela usando ˜
varios s ´ ´ımbolos de igual (Ex: ========). A func¸ao recebe por par ˜ ametro quantos sinais ˆ
de igual serao mostrados*/
#include <stdio.h>
#include <stdlib.h>

void DesenhaLinha(int x){   
    int i;
    for(i=0; i<x; i++){
        printf("=");
    }
    printf("\n");
}

int main(){
    int x;
    scanf("%d", &x);
    DesenhaLinha(x);
}