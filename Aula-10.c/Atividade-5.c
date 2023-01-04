/*Escreva um programa leia um valor inteiro N maior que zero. Se o valor de N for inválido,
o usuário deve digitar outro até que ele seja válido (utilize um laço). Em seguida, leia um vetor V contendo N posições de inteiros
, em que cada valor deverá ser maior ou igual a 2. Alocar esse vetor dinamicamente.
Após a leitura, escreva outro laço para apresentar o vetor na saída padrão (printf).
Resolva em C (funções malloc efree) e em C++ (palavras reservadas new e delete)*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    
    for(N=0 ; N<=0; N){
        printf("Digite um valor inteiro maior que zero: ");
        scanf("%d", &N);
        if(N<=0){
            printf("Erro! Algo ocorreu diferente do esperado!\n");
        }
    }
    
    int i, *v;
    v = (int*) malloc(N*sizeof(int));
    
    for(i=0; i<N; i++){
        printf("Digite o %d° valor maior ou igual a dois: ", i+1);
        scanf("%d", &v[i]);
        if(v[i]<2){
            printf("Número inválido!\n");
            i--;
        }
    }
    
    for(i=0; i<N; i++){
        printf("O %d° termo foi: %d \n", i+1, v[i]);
    }
    
    free(v);
    return 0;
}