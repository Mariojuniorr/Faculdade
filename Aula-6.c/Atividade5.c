#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Digite um i-enésimo valor: ");
    scanf("%d", &n);
    
    int i;
    float v[n], aux=0;
    for(i=0; i<n; i++){
        v[i] = v[i-1] + 1;
    }

    for(i=0; i<n; i++){
        aux += 1/v[i];
    }

    printf("O valor da série S eh %0.3f \n", aux);

    return 0;
}