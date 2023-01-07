#include <stdio.h>
#include <stdlib.h>

int FibonacciIterativo(){

}

int FibonacciRecursivo(){
    
}



int main() {
    int i;

    for (i = 1; i < 100; i++)
        printf("\n termo %d: %d", i, FibonacciIterativo(i));

    for (i = 1; i < 100; i++)   
        printf("\n termo %d: %d", i, FibonacciRecursivo (i));
        
    return 0;
}