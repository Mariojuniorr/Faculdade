#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct funcionario {
    char CPF[11];
    char nome[30];

    char presenca;
};

struct log {
    char CPF[11];
    struct tm data; //Modificar para a maneira estática
    char evento;
};
//Aqui que eu verifico se o funcionário existe e coloco se ele entrou ou saiu?
void registro(FILE *funcionarios, FILE *log) {
    struct funcionario Registro;

    printf("\nDigite o CPF do funcionário a ser registrado: "); scanf("%s",&Registro.CPF);
    while(1){
        rewind(funcionarios);
        fseek(funcionarios, 11*sizeof(Registro), SEEK_SET);
        if(feof(funcionarios)){
            break;
        }
    }

    printf("Digite o nome do funcionário a ser registrado: "); scanf("%s", &Registro.nome);
}

void listagem_funcionarios(FILE *funcionarios) {
    struct funcionario Listagem;
    printf("\n Digite o CPF do funcionário a ser registrado: "); scanf("%s",&Listagem.CPF);

    printf("Digite o nome do funcionário a ser registrado: "); scanf("%s", &Listagem.nome);
}

//Log é o resumo de tudo, como um lugar seguro para guardar e consultar as informações do registro?
void listagem_log(FILE *log) {
    struct log Entrasai;

    printf("\nDigite o CPF do funcionário: "); scanf("%s", &Entrasai.CPF);
    printf("Entrada(E) / Saída(S): "); scanf(" %c", &Entrasai.evento); fwrite(log, "CPF: %s ", Entrasai.CPF); 
    
    time_t segundos; //Pega a biblioteca time.h, e coloca a data no arquivo
    time(&segundos);
    Entrasai.data = localtime(&segundos);
    fwrite(log, "                           Data: %d/%d/%d   ", Entrasai.data.tm_mday, Entrasai.data.tm_mon+1, Entrasai.data.tm_year+1900);
    fwrite(log, "| %d hora(s) : %d minuto(s) : %d segundo(s)                        ", Entrasai.data.tm_hour, Entrasai.data.tm_min, Entrasai.data.tm_sec);

    freadf(log, "Entrada(E) / Saida (S): %c  \n", Entrasai.evento);
}


int main(void){
    FILE *funcionarios = fopen("funcionarios.bin", "wb");
    FILE *log = fopen("log.bin","wb");

    if (funcionarios=NULL || log==NULL)
        {
        printf ("Erro na abertura do arquivo. Fim de programa.");
        exit (1);
        }

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