/*Fac¸a uma func¸ao para verificar se um n ˜ umero ´ e positivo ou negativo. Sendo que o valor ´
de retorno sera 1 se positivo, -1 se negativo e 0 se for igual a 0.*/

#include <stdio.h>
#include <stdlib.h>

int verifica(int x){
    if(x>0){
        return 1;
    }
    else if(x<0){
        return -1;
    }
    else{
        return 0;
    }
}

int main(){
    int x;
    printf("Digite um número: ");
    scanf("%d", &x);
    printf("%d \n", verifica(x));
}