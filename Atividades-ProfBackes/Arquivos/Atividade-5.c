/*. Fac¸a um programa que receba do usuario um arquivo texto e um caracter. Mostre na tela ´
quantas vezes aquele caractere ocorre dentro do arquivo.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int count=0; 
    char caractere, aux;
    FILE *arq = fopen("arq.txt", "r");
    if(arq == NULL){
        printf("Erro na abertura do arquivo");
        exit(1);
    }

    printf("Digite um caracter a ser encontrado no texto: ");
    scanf("%c", &caractere);

    while(1){
        if(feof(arq)){
            break;
        }
        aux = fgetc(arq);
        if(caractere == aux){
            count++;
        }
    }
    printf("%d caracteres \n", count);

    fclose(arq);
}