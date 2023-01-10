/*Fac¸a um programa que receba do usuario o tamanho de uma string e chame uma ´
func¸ao para alocar dinamicamente essa string. Em seguida, o usu ˜ ario dever ´ a informar o ´
conteudo dessa string. O programa imprime a string sem suas vogais. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void aloca(char *x){
    x=(char*) malloc(300*(sizeof(char)));
}

int main(){
    char *frase;
    aloca(frase);

    for(int i=0; i<300; i++){
        scanf("%c", &frase[i]);
    }
    for(int i=0; i<50; i++){
        if(frase[i]!='a' && frase[i]!='e' && frase[i]!='i' && frase[i]!='o' && frase[i]!='u'){
            printf("%c", frase[i]);
        }
    }

    return 0;
}