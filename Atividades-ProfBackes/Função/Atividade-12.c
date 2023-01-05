/*Escreva uma func¸ao que receba um n ˜ umero inteiro maior do que zero e retorne a soma ´
de todos os seus algarismos. Por exemplo, ao numero 251 corresponder ´ a o valor 8 (2 ´
+ 5 + 1). Se o numero lido n ´ ao for maior do que zero, o programa terminar ˜ a com a ´
mensagem “Numero inv ´ alido”. */

#include <stdio.h>
#include <stdlib.h>

int soma(int x){
    int soma;
    while(x>0){
       soma=soma+x%10; //Separa o último número
       x=x/10; //"Vira" um float, mas sem o decimal, exclui o número com a vírgula
       };
    return soma;
}



int main(){
    int x;
    printf("Digite um número: ");
    scanf("%d", &x);

    if(x<0){
        printf("Número inválido. \n");
    }
    else{
        printf("A soma dos números separados é: %d", soma(x));
    }
}