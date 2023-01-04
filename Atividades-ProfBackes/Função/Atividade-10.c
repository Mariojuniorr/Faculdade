/*Fac¸a uma func¸ao que receba dois n ˜ umeros e retorne qual deles ´ e o maior*/

#include <stdio.h>
#include <stdlib.h>

void maior(int x, int y){
    if(x>y){
        printf("%d é maior do que %d \n",x, y);
    }
    else if(y>x){
        printf("%d é maior do que %d \n",y, x);
    }
    else{
        printf("Os dois números são iguais \n");
    }
}

int main(){
    int n1,n2;
    printf("Digite dois números: ");
    scanf("%d %d", &n1, &n2);
    maior(n1,n2);
}
