#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct funcionario {
    char CPF[11];
    char nome[30];
    struct tm *entrada;
    struct tm *saida;
    char presenca;
} Funcionario;

typedef struct log {
    char CPF[11];
    struct tm *data;
    char evento;
} Log;

void registro(FILE *funcionarios, FILE *log) {
    // completar
}

void listagem_funcionarios(FILE *funcionarios) {
    // completar
}

void listagem_log(FILE *log) {
    Log Entrasai;

    printf("\nDigite o CPF do funcionário: "); scanf("%s", &Entrasai.CPF);

    printf("Entrada(E) / Saída(S): "); scanf(" %c", &Entrasai.evento); 
    
    fprintf(log, "CPF: %s   ", Entrasai.CPF); 
    
    time_t segundos; //Pega a biblioteca time.h, e coloca a data no arquivo
    time(&segundos);
    Entrasai.data = localtime(&segundos);
    fprintf(log, "                           Data: %d/%d/%d   ", Entrasai.data->tm_mday, Entrasai.data->tm_mon+1, Entrasai.data->tm_year+1900);
    fprintf(log, "| %d hora(s) : %d minuto(s) : %d segundo(s)                        ", Entrasai.data->tm_hour, Entrasai.data->tm_min, Entrasai.data->tm_sec);

    fprintf(log, "Entrada(E) / Saida (S): %c  \n", Entrasai.evento);
}


int main(void){
    FILE *funcionarios = fopen("funcionarios.bin", "wb");
    FILE *log = fopen("log.bin","wb");

    // a partir daqui nesta função main() o código não deve ser alterado
    int opcao;
    do {
        printf("\n\n 0-sair\n 1-registro entrada/saida\n 2-lista funcionarios\n 3-lista log\n");
        printf("\n Opcao: "); scanf(" %d",&opcao);
        switch(opcao) {
            case 1: registro(funcionarios,log); break;
            case 2: listagem_funcionarios(funcionarios); break;
            case 3: listagem_log(log); break;
            printf("\n\n\n");
        }
    } while (opcao != 0);

    fclose(funcionarios);
    fclose(log);
    return 0;
}