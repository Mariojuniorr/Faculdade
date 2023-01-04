#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, cont, num, maior=0, repeat=0;
    scanf ("%d", &N);

    for(cont=1; cont<=N; cont++){
        scanf ("%d", &num);
        
        if (maior == num){
            repeat++;  //dúvidas aqui, sobre como implementar o número de vezes que o maior num repete
        }
        if(num>maior){
            maior = num;
        }
    }

    printf("O número %d é o maior, e foi repetido %d vezes", maior, repeat);
    return 0;
}