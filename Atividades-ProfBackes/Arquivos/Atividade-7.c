/*. Fac¸a um programa que leia o conteudo de um arquivo e crie um arquivo com o mesmo ´
conteudo, mas com todas as letras min ´ usculas convertidas para mai ´ usculas. Os no- ´
mes dos arquivos serao fornecidos, via teclado, pelo usu ˜ ario. A func¸ ´ ao que converte ˜
maiuscula para min ´ uscula ´ e o toupper(). Ela ´ e aplicada em cada caractere da string.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *arq = fopen("arq.txt", "r");
    FILE *arq3 = fopen("arq3.txt", "w");

    if(arq == NULL || arq3 == NULL){
        printf("Erro na abertura do arquivo!");
        exit(1);
    }

    do{
        if(feof(arq)){
            break;
        }
        char aux = fgetc(arq);
        if(aux >= 97 && aux <= 122){
            aux -= 32;
        }
        fprintf(arq3, "%c", aux);
    }while(1);

    fclose(arq);
    fclose(arq3);
}