/*Entre com um nome e imprima o nome somente se a primeira letra do nome for ‘a’
(maiuscula ou min ´ uscula).*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome[20];
    gets(nome);
    if(nome[0]=='A' || nome[0]=='a'){
        fputs(nome, stdout);
    }
    else{
        printf("Nao começa com a letra a");
    }
    return 0;
}