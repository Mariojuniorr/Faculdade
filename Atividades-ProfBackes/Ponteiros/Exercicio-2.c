#include <stdio.h>
#include <stdlib.h>

struct dados
    {
        int matricula;
        char aluno[20];
        float notas[3];
    };

int main(){
    printf("%d Bytes \n", sizeof(struct dados));

}