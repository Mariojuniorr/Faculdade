//Nome: Otavio Rochael Cunha. Matricula: 12211BSI218
//Nome: Mário Lúcio Santos Júnior. Matricula: 12211BSI252

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char M[100] = "The quick brown fox jumps over the lazy dog ";
    char N[100] = "A ligeira raposa marrom saltou sobre o cachorro preguicoso";
    char R[100];

    // 1) imprimir o tamanho das strings M e N
    printf("%d \n", strlen(M));
    printf("%d \n", strlen(N));

    // 2) copiar M para R
    strcpy(R, M);
    printf("%s \n", R);

    // 3) concatenar N em R
    strcat(R, N);
    printf("%s \n", R);
}
