//Nome: Otavio Rochael Cunha. Matricula: 12211BSI218
//Nome: Mário Lúcio Santos Júnior. Matricula: 12211BSI252

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct funcionario{
    char CPF[12];
    char nome[30];
    time_t entrada;
    time_t saida;
    char status;
};

struct log{
    char CPF[12];
    time_t horario;
    char evento;
};

void registro(FILE *funcionarios, FILE *log) {
    struct funcionario *listaFuncionarios = (struct funcionario*) malloc(sizeof(struct funcionario));
    struct log *login = (struct log*) malloc(sizeof(struct log));
    char CPF[12], entrasai, confirma;
    
    printf("CPF: ");  setbuf(stdin, NULL);  scanf("%s", CPF);
    rewind(funcionarios);
    while(1){
        fread(listaFuncionarios,sizeof(struct funcionario),1,funcionarios);
        if(strcmp(listaFuncionarios->CPF,CPF) == 0){
            printf("Entrada(E) / Saída (S): "); scanf(" %c", &entrasai);
            if (entrasai == 'S' || entrasai == 's'){
                time(&listaFuncionarios->saida);
                strcpy(login->CPF,listaFuncionarios->CPF);
                time(&login->horario);
                login->evento = 'S';
                listaFuncionarios->status = 'A';
            } 
            else if (entrasai == 'E' || entrasai == 'e'){
                time(&listaFuncionarios->entrada);
                strcpy(login->CPF,listaFuncionarios->CPF);
                time(&login->horario);
                login->evento = 'E';
                listaFuncionarios->status = 'P';
            }
            else {
                printf("Opcao inválida\n");
                break;
            }
            fseek(funcionarios,-sizeof(struct funcionario),SEEK_END);
            fwrite(listaFuncionarios,sizeof(struct funcionario),1,funcionarios);
            fwrite(login,sizeof(struct log),1,log);
            break;
        }
        else if (feof(funcionarios)){
            printf("CPF não cadastrado. Digite 1 para cadastrar e 0 para sair: "); scanf(" %c",&confirma);
            if (confirma == '1'){
                printf("Digite o CPF novamente: "); scanf("%s", listaFuncionarios->CPF);
                printf("Nome: ");  scanf("%s", listaFuncionarios->nome);
                fwrite(listaFuncionarios,sizeof(struct funcionario),1,funcionarios);
                printf("Cadastro relizado com sucesso!\n");
                break;
            }
            else {break;}
        }
        else{break;}
    }
    free(listaFuncionarios);
    free(login);
}

void listagem_funcionarios(FILE *funcionarios){
    rewind(funcionarios);
    struct funcionario *listaFuncionarios = (struct funcionario*) malloc(sizeof(struct funcionario));
    while(1){
        fread(listaFuncionarios,sizeof(struct funcionario),1,funcionarios);
        printf("\n  CPF: %s   ",listaFuncionarios->CPF);
        printf("Nome: %s  \n",listaFuncionarios->nome);
        if(listaFuncionarios->entrada != 0) {
            printf("  Entrada: %s", ctime(&listaFuncionarios->entrada));
        }
        if(listaFuncionarios->saida != 0){
            printf("  Saída: %s",ctime(&listaFuncionarios->saida));
        }
        else{
            printf("  Entrada/Saída ainda não foi lançada no sistema    \n");
        }
        if (listaFuncionarios->status == 'P'){
            printf("  Status: Presente\n\n");
        }
        else if (listaFuncionarios->status == 'A'){
            printf("  Status: Ausente\n\n");
        }
        if(feof(funcionarios)){
            break;
        }
    }
    free(listaFuncionarios);
}

void listagem_log(FILE *log) {
    rewind(log);
    struct log *login = (struct log*) malloc(sizeof(struct log));
    char CPF[12];
    printf("CPF: ");
    scanf("%s", CPF);
    while(1){
        fread(login,sizeof(struct log),1,log);
        if (strcmp(CPF,login->CPF)==0){
            printf("\nCPF: %s\n",login->CPF);
            printf("Horario: %s",ctime(&login->horario));
            if (login->evento == 'E'){
                printf("Evento: Entrada\n\n");
            }
            if (login->evento == 'S'){
                printf("Evento: Saida\n\n");
            }
        }
        if(feof(log)){break;}
    }
    free(login);
}

int main() {
    // abrir arquivos (completar). Sugestão: tentar abrir com "rb+", e se não abrir, tentar abrir com "wb+",
	// e se não abrir, informar o usuário que não foi possível
    FILE *funcionarios;
    FILE *log;
    funcionarios = fopen("funcionarios.bin","rb+");
    log = fopen("log.bin","rb+");
    
    if (funcionarios == NULL ){funcionarios = fopen("funcionarios.bin","wb+");}
    if(!log){ log = fopen("log.bin", "wb+");}
    if(!funcionarios || !log){ 
        printf("Erro na abertura do arquivo!");
        exit(1);
    }
    // a partir daqui nesta função main() o código não deve ser alterado
    int opcao;
    do{
        printf("\n\n 0-sair\n 1-registro entrada/saida\n 2-lista funcionarios\n 3-lista log\n");
        printf("\n Opcao: ");
        scanf(" %d",&opcao);
        switch(opcao){
            case 1:
                registro(funcionarios,log);
                break;
            case 2:
                listagem_funcionarios(funcionarios);
                break;
            case 3:
                listagem_log(log);
                break;
            printf("\n\n\n");
        }
    }while(opcao != 0);
    fclose(funcionarios);
    fclose(log);
    return 0;
}