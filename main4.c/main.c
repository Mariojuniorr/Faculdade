#include <stdio.h>
#include <stdlib.h>
#include <time.h> // biblioteca time.h
#include <string.h>

struct listagem_funcionario{
    char CPF[11],nome[30];
    time_t entrada;
    time_t saida;
    char status;
};
struct log{
    char CPF[11];
    time_t horario;
    char evento;
};
 
void registro(FILE *funcionarios, FILE *log) {
    struct listagem_funcionario Funcionario;
    printf("CPF: ");
    scanf("%s",Funcionario.CPF);
    rewind(funcionarios);
    struct log login;
    struct listagem_funcionario x;
    while(1) {
    fread(&x,sizeof(struct listagem_funcionario),1,funcionarios);
    if(feof(funcionarios)){
        break;
    }
    if(strcmp(Funcionario.CPF,x.CPF)==0){
        printf("Entrada(E) / Saída(S): ");
        scanf(" %c",&login.evento);
        if(login.evento=='E'){
            x.entrada = time(NULL);
            x.status = 'P';
        }
        else{
            x.saida = time(NULL);
            x.status = 'A';
        }
        strcpy(login.CPF,x.CPF);
        login.horario = time(NULL);
        fseek(funcionarios, -1 * (int)sizeof(struct listagem_funcionario),SEEK_CUR);
        fwrite(&x,sizeof(struct listagem_funcionario),1,funcionarios);
        fwrite(&login,sizeof(struct log),1,log);
        return;
    }
}
    login.evento = 'E';
    login.horario = time(NULL);
    fwrite(&login,sizeof(struct log),1,log);
    Funcionario.entrada= time(NULL);
    Funcionario.status = 'P';
    printf("Nome: ");
    scanf("%s",Funcionario.nome); 
    fwrite(&Funcionario,sizeof(struct listagem_funcionario),1,funcionarios);
    return;
}
 
void listagem_funcionarios(FILE *funcionarios) {
    rewind(funcionarios);
    struct listagem_funcionario x;
    while(1){
    fread(&x,sizeof(struct listagem_funcionario),1,funcionarios);
    if(feof(funcionarios)){
        break;
    }
    printf("Nome: %s", x.nome);
    printf("CPF: %s", x.CPF);
    printf("Status: %c ", x.status);
    if(x.status=='P'){
        printf("%s\n", ctime(&x.entrada));
    }
    else{
        printf("%s\n", ctime(&x.saida));
    }
    }
}
 
void listagem_log(FILE *log) {
    rewind(log);
    struct log x;
    while(1){
    fread(&x,sizeof(struct log),1,log);
    if(feof(log)){
        break;
    }
    printf("CPF:%s\n", x.CPF);
    printf("Horario:%s\n", ctime(&x.horario));
    printf("Evento:%c\n", x.evento);
    }
}
 
int main() {
    // abrir arquivos (completar). Sugestão: tentar abrir com "rb+", e se não abrir, tentar abrir com "wb+", 
    // e se não abrir, informar o usuário que não foi possível
    FILE *funcionarios;
    FILE *log;
 
    funcionarios = fopen("funcionarios.bin","rb+");
    log = fopen("log.bin","rb+");
    funcionarios = fopen("funcionarios.bin","wb+");
    log = fopen("log.bin","wb+");
    if(!funcionarios || !log){
        printf("Erro na abertura do arquivo\n");
        return 1;
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