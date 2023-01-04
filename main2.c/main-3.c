//Nome: Otavio Rochael Cunha. Matricula: 12211BSI218
//Nome: Mário Lúcio Santos Júnior. Matricula: 12211BSI252

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char M[20][30], aux[20];
    int i, j;

// leia cada string M[i]
    printf("Digite os nomes: \n");
    for(i=0; i < 20; i++){
        scanf("%s", &M[i]);
    }

// localize o elemento que seria primeiro de uma lista ordenada
    for(i = 0; i < 20; i++){
        for(j = 0; j < 20; j++){
        if(strcmp(M[j], M[j+1]) > 0){
                strcpy(M[j], M[j+1]);
        }
        }    
   }

    printf("\n \n");

//imprime o primeira nome da lista
    printf("%s \n", M[0]);
    
    return 0;
}
