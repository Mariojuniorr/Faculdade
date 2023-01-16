/*. Fac¸a um programa que receba do usuario um arquivo texto e mostre na tela quantas ´
letras sao vogais e quantas s ˜ ao consoantes.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arq = fopen("arq.txt", "r");
    int consoante=0, vogal=0;
    if(arq == NULL){
        printf("Erro na abertura do arquivo");
        exit(1);
    }

    while(1){
        if(feof(arq)){
            break;
        }
        char caractere = fgetc(arq);
        if(caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u'){
            vogal++;
        }
        else{
            consoante++;
        }
    }
    printf("%d vogais e %d consoantes  \n", vogal, consoante);
    fclose(arq);
}