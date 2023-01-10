/*. Fac¸a um programa que simule a memoria de um computador: o usu ´ ario ir ´ a especificar o ´
tamanho da memoria, ou seja, quantos bytes ser ´ ao alocados do tipo inteiro. Para tanto, ˜
a memoria solicitada deve ser um valor m ´ ultiplo do tamanho do tipo inteiro. Em seguida, ´
o usuario ter ´ a 2 opc¸ ´ oes: inserir um valor em uma determinada posic¸ ˜ ao ou consultar o ˜
valor contido em uma determinada posic¸ao. A mem ˜ oria deve iniciar com todos os dados ´
zerados.*/
#include <stdio.h>
#include <stdlib.h>

void inserir(int x, int *p){
    for(int i=1; i<=(x/sizeof(int)); i++){
        printf("Digite o valor %d: ", i);
        scanf("%d", &p[i]);
    }
}

void consultar(int x, int *p){
    printf("Os números digitados foram: ");
    for(int i=1; i<=(x/sizeof(int)); i++){
        printf("%d   ", p[i]);
    }
}


int main(){
    int tam;
    printf("Digite o tamanho da mémoria: "); scanf("%d", &tam);

    if(tam%sizeof(int)!=0){
        printf("Tamanho inválido");
        exit(1);
    }
    
    int *p=(int*) malloc(sizeof(tam));

    int opcao;
    do{
            printf("\n\n 0-sair\n 1-inserir\n 2-consultar\n");
            printf("\n Opcao: "); scanf(" %d",&opcao);
        switch(opcao) {
            case 1: inserir(tam, p); break;
            case 2: consultar(tam, p); break;
            default: break;
        }
    }while(opcao != 0);

}