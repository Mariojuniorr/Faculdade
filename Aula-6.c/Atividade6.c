#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n;
    printf("Digite um i-enésimo valor: ");
    scanf("%d", &n);
    
    int i;
    float v[n], aux=0, m, d, desvio;
    for(i=0; i<n; i++){
        v[i] = v[i-1] + 1;
        aux += v[i];
    }

    m = aux / n;

    for(i=0; i<n; i++){
        d += pow((v[i]-m), 2);
    }

    d = sqrt(d);

    printf("A media eh: %0.3f \n O desvio padrão eh: %0.3f\n", m, d);

    return 0;
}