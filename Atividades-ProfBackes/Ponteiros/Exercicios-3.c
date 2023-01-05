#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Cadastro{
    char nome[20];
    int idade;
    char endereco[80];
};

int main() {
    int N, i;
    printf("Digite um valor positivo N: ");
    scanf("%d", &N);
    if(N <= 0){
        printf("Inválido!");
        exit(1);
    }

    

    struct Cadastro pessoa[N];
    for(i=0; i<N; i++){
        printf("Digite o nome: "); gets(pessoa[i].nome);
        printf("Digite a idade: "); gets(pessoa[i].idade);
        printf("Digite o endereço: ");
        scanf("%d", &pessoa[i].endereco);
    }

    for(i=0; i<N; i++){
        printf("%s tem a idade %d e o seu endereco eh ", pessoa[i].nome, pessoa[i].idade, pessoa[i].endereco);
    }
}