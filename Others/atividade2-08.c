#include <stdio.h>

int main(){
    int numNat, aux=0;
    for(numNat=100000; numNat>0; numNat--){
        if((numNat%3==0) || (numNat%5==0)){
        aux += numNat;
        }
    }
    printf("\n %i\n", aux);
}