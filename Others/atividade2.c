#include <stdio.h>
#include <stdlib.h>


int main(){
    char escolha1, escolha2, resposta;
    printf ("Player1 - Choose R, P or S: ");
    scanf(" %c", &escolha1);
    printf ("Player2 - Choose R, P or S: ");
    scanf(" %c", &escolha2);
    getchar();

    if ((escolha1 == 'R' && escolha2 == 'S') || (escolha1 == 'S' && escolha2 == 'R')){
        printf("Rock wins!\n");
    }
    else if ((escolha1 == 'S' && escolha2 == 'P') || (escolha1 == 'P' && escolha2 == 'S')){
        printf("Scissor wins!\n");
    }

    else if ((escolha1 == 'P' && escolha2 == 'R') || (escolha1 == 'R' && escolha2 == 'P')){
        printf("Paper wins!\n");
    }

    else if (escolha1 == escolha2){
        printf ("Empate\n");
    }

    return 0;
}