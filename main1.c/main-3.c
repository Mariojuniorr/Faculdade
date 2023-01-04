#include <stdio.h>
#include <math.h>

int main(){
    int N;
    printf("Quantos valores você deseja ler? ");
    scanf("%i", &N);

    int v[N], i;
    float aux, soma=0, serie;
    for(i=0; i<N; i++){
        scanf("%d", &v[i]); 
    }

    for(i=0; i<N; i++){
        aux = v[i]/(i+1)*(i+1);
        soma += aux;
    }

    serie = pow(soma, 1.0/3.0);
    
    printf("O valor da serie s eh %f", serie);
}