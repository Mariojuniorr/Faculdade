#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    struct tm *entrada;
    time_t segundos;
    time(&segundos);
    entrada = localtime(&segundos);

    printf("\nDia: %d", entrada->tm_mday);

    return 0;
}