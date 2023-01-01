#include <stdio.h>
#include <math.h>

int main(){
    int N;
    printf("Quantos valores você deseja ler? ");
    scanf("%i", &N);

    int v[N], i;
    float aux, soma=0, media, d;

    for(i=0; i<N; i++){
        scanf("%d", &v[i]); 
    }

    for(i=0; i<N; i++){
        soma += v[i];
    }   
    media = soma/ N;

    for(i=0, soma=0; i<N; i++){
        soma += pow((v[i]-media), 2);
    }
    d = soma/(N-1);

    printf("O valor da media eh %f e a variancia eh %f \n", media, d);
}