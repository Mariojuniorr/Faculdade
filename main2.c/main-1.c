//Nome: Otavio Rochael Cunha. Matricula: 12211BSI218
//Nome: Mário Lúcio Santos Júnior. Matricula: 12211BSI252

#include <stdio.h>
#include <stdlib.h>


float **alocacao (int lin, int col)
{
  float **mat; /* ponteiro que forma a matriz*/
  int i;
  /*alocação das linhas das matrizes*/
    mat = (float**) malloc (lin * sizeof(float*));	/*cria um vetor considerando o número de linhas dispostas, do tamanho float */

  
  /* alocação das colunas das matrizes*/
  for ( i = 0; i < lin; i++ ) { /* para cada linha, adiciona-se o espaço na memória para a quantidade de colunas. (Espaço de uma matriz[M][P])*/
    mat[i] = (float*) malloc (col * sizeof(float));	
    /* cria um vetor considerando o número de colunas dispostas, do tamanho float*/
  }
  return (mat); /* volta o ponteiro para a matriz */
}


int main () {
  float **matA, **matB, **matR;  /* matriz a ser alocada */
  int   M, N, O, P;   /* numero de linhas e colunas da matriz */
  int i, j, aux;
    
    /* outros comandos, inclusive inicializacao para M e P */
    printf("Quantidade de linhas de A: ");
    scanf("%d", &M);
    printf("Quantidade de colunas de A: ");
    scanf("%d", &N);
    printf("Quantidade de linhas de B: ");
    scanf("%d", &O);
    printf("Quantidade de colunas de B: ");
    scanf("%d", &P);
    printf("\n");

    /*aloca as matrizes de acordo com a quantidade de linhas que foi digitada pelo usuário*/
    matA = alocacao (M, N);
    matB = alocacao (O, P);
    matR = alocacao (M, P);

    if((M<1) || (N<1) || (P<1)){ /*Verifica se o número de linhas e colunas é positivo*/
        printf("Erro! Número de linhas e/ou colunas inválido!");
        exit(1);
    }

    else if(N != O){ /*Verifica se é possível fazer a multiplicação dos vetores*/
        printf("Erro! Há diferença no número de colunas de A e linhas de B \n");
        exit(1);
    }

    else{ /*todos os requisitos foram necessários para operação*/
        for(i = 0; i<M; i++){
            for(j = 0; j<N; j++){
                printf("Insira o número da MatrizA[%d][%d]: ", i, j);
                scanf("%f", &matA[i][j]);
            }
        }

        printf("\n \n");

        for(i = 0; i<N; i++){
            for(j = 0; j<P; j++){
                printf("Insira o número da MatrizB[%d][%d]: ", i, j);
                scanf("%f", &matB[i][j]);
            }
        }

        /*Faz a multiplicação das matrizes, resetando o auxiliar todas as vezes que uma nova linha é inserida*/
        for( i=0; i<M; i++){
            for( j=0; j<P; j++){
                for(int k=0; k<N; k++){
                    matR[i][j] = matR[i][j] + matA[i][k] * matB[k][j];
                }
            }
        }
        
        /*Imprime o resultado*/
        printf("\nO resultado da multiplicação da matrizA[%d][%d] e da matrizB[%d][%d] eh:", M, N, O, P);
        printf("\n\n==========================\n");
        for(i=0; i<M; i++){
            for(j=0; j<P; j++){
                printf("%f     ", matR[i][j]);
                }
            printf("\n");
        }
        printf("==========================\n");
    }



    /* libera todas as colunas das matrizes */
    for(j=0; j<P; j++){
        free (matA[j]);
        free (matB[j]);
        free (matR[j]);
        }
    /* libera o ponteiros */
    free (matA);
    free (matB);
    free (matR);


    return 0;
}
