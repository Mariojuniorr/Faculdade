/*Um arquivo texto possui uma matriz de valores inteiros dentro dele. Os dois primeiros números são as dimensões da matriz (linhas e colunas), enquanto o restante dos números são os valores de cada elemento da matriz, dispostos linha a linha em sequência. Escreva uma função que receba o nome do arquivo e retorne o ponteiro para uma matriz alocada dinamicamente contendo os valores lidos do arquivo.*/

#include <stdio.h>
#include <stdlib.h>

int **ler (const char *arquivo, int *lin, int *col){
    FILE *arq = fopen(arquivo, "r");
    fscanf(arq, "%d", lin);
    fscanf(arq, "%d", col);
    int **m = (int**) malloc(*lin*sizeof(int*));
    for(int i=0; i<*lin; i++){
        m[i] = (int*) malloc(*col*sizeof(int*));
        for(int j=0; j<*col; j++){
            fscanf(arq, "%d", &m[i][j]);
        }
    }
    fclose(arq);
    return m;
}

int main(){
    int linhas, colunas;
    int **matriz = ler("dados.txt", &linhas, &colunas);
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++ ){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}