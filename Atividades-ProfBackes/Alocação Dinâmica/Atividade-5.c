/*. Fac¸a um programa que leia um numero N e: ´
• Crie dinamicamente e leia um vetor de inteiro de N posic¸oes; ˜
• Leia um numero inteiro X e conte e mostre os m ´ ultiplos desse n ´ umero que existem ´
no vetor.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);
    int *p = (int*) malloc(N*(sizeof(int)));
    for(int i=0; i<N; i++){
        p[i] = i;
    }

    int x;
    scanf("%d", &x);
    for(int i=0; i<N; i++){
        if(N%i==0){
            printf("%d \n", p[i]);
        }
    }
}