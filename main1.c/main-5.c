#include <stdio.h>  
#include <stdint.h>


int main(){
    int casa[3][3] = {{0 , 0, 0},
                      {0 , 0, 0},
                      {0 , 0, 0}};
    int move1, move2, i, j, aux;
    char c;
    printf(" 1 | 2 | 3\n");
    printf(" 4 | 5 | 6\n");
    printf(" 7 | 8 | 9\n");

    while(c!='Q'){
        printf("J1: Digite o numero da casa: ");
        scanf("%d", &move1);
    
            if(move1 == 1){
                casa[0][0] = 1;
            }
            else if(move1 == 2){
                casa[0][1] = 1;
            }
            else if(move1 == 3){
                casa[0][2] = 1;
            }
            else if (move1 == 4){
                casa [1][0] = 1;
            }
            else if (move1 == 5){
                casa [1][1] = 1;
            }
            else if (move1 == 6){
                casa [1][2] = 1;
            }
            else if (move1 == 7){
                casa [2][0] = 1;
            }
            else if (move1 == 8){
                casa [2][1] = 1;
            }
            else if (move1 == 9){
                casa [2][2] = 1;
            }
            
        printf(" %d | %d | %d\n", casa[0][0], casa[0][1], casa[0][2]);
        printf(" %d | %d | %d\n", casa[1][0], casa[1][1], casa[1][2]);
        printf(" %d | %d | %d\n", casa[2][0], casa[2][1], casa[2][2]);
            if(((casa[0][0]==1) && (casa[0][1]==1) && (casa[0][2]==1)) || ((casa[1][0]==1)&&(casa[1][1]==1)&&(casa[1][2]==1)) || ((casa[2][0]==1)&&(casa[2][1]==1)&&(casa[2][2]==1))
            || ((casa[0][0]==1)&&(casa[1][0]==1)&&(casa[2][0]==1)) || ((casa[0][1]==1)&&(casa[1][1]==1)&&(casa[2][1]==1)) || ((casa[0][2]==1)&&(casa[1][2]==1)&&(casa[2][2]==1))
            || ((casa[0][0]==1)&&(casa[1][1]==1)&&(casa[2][2]==1)) || ((casa[2][0]==1)&&(casa[1][1]==1)&&(casa[0][2]==1))){
            printf("\nVitória do jogador 1!\n\n");
            break;
        }

        printf("J2: Digite o numero da casa: ");
        scanf("%d", &move2);

        

            if(move2 == 1){
                casa [0][0] = 2;
            }
            else if (move2 == 2){
                casa [0][1] = 2;
            }
            else if (move2 == 3){
                casa [0][2] = 2;
            }
            else if (move2 == 4){
                casa [1][0] = 2;
            }
            else if (move2 == 5){
                casa [1][1] = 2;
            }
            else if (move2 == 6){
                casa [1][2] = 2;
            }
            else if (move2 == 7){
                casa [2][0] = 2;
            }
            else if (move2 == 8){
                casa [2][1] = 2;
            }
            else if (move2 == 9){
                casa [2][2] = 2;
            }


    printf(" %d | %d | %d\n", casa[0][0], casa[0][1], casa[0][2]);
    printf(" %d | %d | %d\n", casa[1][0], casa[1][1], casa[1][2]);
    printf(" %d | %d | %d\n", casa[2][0], casa[2][1], casa[2][2]);
        if(((casa[0][0]==2) && (casa[0][1]==2) && (casa[0][2]==2)) || ((casa[1][0]==2)&&(casa[1][1]==2)&&(casa[1][2]==2)) || ((casa[2][0]==2)&&(casa[2][1]==2)&&(casa[2][2]==2))
            || ((casa[0][0]==2)&&(casa[1][0]==2)&&(casa[2][0]==2)) || ((casa[0][1]==2)&&(casa[1][1]==2)&&(casa[2][1]==2)) || ((casa[0][2]==2)&&(casa[1][2]==2)&&(casa[2][2]==2))
            || ((casa[0][0]==2)&&(casa[1][1]==2)&&(casa[2][2]==2)) || ((casa[2][0]==2)&&(casa[1][1]==2)&&(casa[0][2]==2))){
            printf("\nVitória do jogador 2!\n\n");
            break;
        }

        if((move1==move2)||(move1>9)||(move2>9)||(move1<=0)||(move2<=0)){
            printf("Erro! Comando inválido, jogo encerrado! \n");
            break;
        }

    }
}