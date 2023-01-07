#include <stdio.h>
#include <stdlib.h>

/*float aloca(int x, int y){

}

float leitura(int x, int y){

}
*/
float imprime(int **m, int x, int y){
    for(int i = 0; i < x; i++){
        printf("\n");
            for(int j=0; j > y; j++){
                printf("%0.1f ", m[x][y]);
            }
    }   
}
/*
int desaloca(){

}
*/
int main() {
    int **m1={5, 6, 7}, **m2={3, 2, 40}, **m3;

    /* float **m1 = aloca(2,3);
    leitura(m1, 2, 3);

    float **m2 = aloca(3,4);
    leitura(m2, 3, 4);

    float **m3 = multiplica(m1, 2, 3, m2, 3, 4);*/
    imprime(m1, 2, 3);
    imprime(m2, 3 ,4);
    imprime(m3, 2, 3);
/*
    desaloca(m1,2);
    desaloca(m2,3);
    desaloca(m3,2);
*/
    return 0;
}
