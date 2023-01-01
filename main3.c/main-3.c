//Nome: Otavio Rochael Cunha. Matricula: 12211BSI218
//Nome: Mário Lúcio Santos Júnior. Matricula: 12211BSI252

#include <stdio.h>
#include <stdlib.h>


int crescente(int n){
    if(n>=0){
        crescente(n-1);
        printf("%d ", n);
    }
}


int decrescente(int n){
    if(n==0){
        printf("0 ");
    }

    else{
        printf("%d ", n);
        return decrescente(n-1);
    }
}


int main(){
    int n=15;

    printf("crescente: "); crescente(n);
    printf("\ndecrescente: ");  decrescente(n);

    printf("\n");

    return 0;
}