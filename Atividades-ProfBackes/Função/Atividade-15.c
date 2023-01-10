/*Crie um programa que receba tres valores (obrigatoriamente maiores que zero), repre- ˆ
sentando as medidas dos tres lados de um tri ˆ angulo. Elabore func¸ ˆ oes para: ˜
(a) Determinar se eles lados formam um triangulo, sabendo que: ˆ
• O comprimento de cada lado de um triangulo ˆ e menor do que a soma dos outros ´
dois lados.
(b) Determinar e mostrar o tipo de triangulo, caso as medidas formem um tri ˆ angulo. ˆ
Sendo que:
• Chama-se equilatero o tri ´ angulo que tem tr ˆ es lados iguais. ˆ
• Denominam-se isosceles o tri ´ angulo que tem o comprimento de dois lados ˆ
iguais.
• Recebe o nome de escaleno o triangulo que tem os tr ˆ es lados diferentes.*/

#include <stdio.h>
#include <stdlib.h>

void ehTriangulo(int x, int y, int z){
    if(x<=0 || y<=0 || z<=0){
        printf("Uma das medidas digitadas é inválida!");
        exit(0);
    }
    else{
        printf("Eh um triangulo! \n");
    }
}

void tipoTriangulo(int x, int y, int z){
    if(x==y && y==z){
        printf("Triângulo Equilátero! \n");
    }
    else if(x==y || y==z || x==z){
        printf("Triângulo isósceles! \n");
    }
    else{
        printf("Triângulo escaleno! \n");
    }
}

int main(){
    int x,y,z;
    printf("Digite as três medidas do triângulo: ");
    scanf("%d %d %d", &x,&y,&z);

    ehTriangulo(x,y,z);
    tipoTriangulo(x,y,z);
    return 0;
}

