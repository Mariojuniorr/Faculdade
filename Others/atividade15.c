#include <stdio.h>
#include <stdlib.h>

int main() {
    float S=0, divisor, dividendo, a, b;

    for(divisor=1, dividendo=1; dividendo <= 50; dividendo++, divisor +2){
        S += dividendo/divisor;
    }

    printf(" %f\n", S); // 1275 seria a resposta certa??
    return 0;
}
