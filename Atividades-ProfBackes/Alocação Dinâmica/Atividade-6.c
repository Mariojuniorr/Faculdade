/*. Fac¸a um programa que simule a memoria de um computador: o usu ´ ario ir ´ a especificar o ´
tamanho da memoria, ou seja, quantos bytes ser ´ ao alocados do tipo inteiro. Para tanto, ˜
a memoria solicitada deve ser um valor m ´ ultiplo do tamanho do tipo inteiro. Em seguida, ´
o usuario ter ´ a 2 opc¸ ´ oes: inserir um valor em uma determinada posic¸ ˜ ao ou consultar o ˜
valor contido em uma determinada posic¸ao. A mem ˜ oria deve iniciar com todos os dados ´
zerados.*/
#include <stdio.h>
#include <stdlib.h>

void inserir(int x){
    
}

void consultar(int x){

}


int main(){
    int tam;
    printf("Digite o tamanho da mémoria: "); scanf("%d", &tam);


    int opcao;
    switch(opcao)
    {
        case 1: inserir(tam); break;
        case 2: consultar(tam); break;

        default: break;
    }
}