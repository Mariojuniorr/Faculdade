#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// definir estruturas no inicio do programa
struct funcionario{
    char CPF[12];
    char nome[30];
    time_t entrada;
    time_t saida;
    char status;
};

typedef struct {
    char CPF[12];
    time_t horario;
    char evento;
} Log;

void registro(FILE *funcionarios, FILE *log) {
    char CPF[12], entrasai;
    struct funcionario *func = (struct funcionario*) malloc(sizeof(struct funcionario));
    if (func == NULL){
        printf("Memoria insuficiente");
        return;
    }
    Log *l = (Log*) malloc(sizeof(Log));
    if (l == NULL){
        printf("Memoria insuficiente");
        return;
    }
    printf("CPF: ");
    setbuf(stdin, NULL);
    fgets(CPF, 12, stdin);
    rewind(funcionarios);
    while(1){
        fread(func,sizeof(struct funcionario),1,funcionarios);
        if(strcmp(func->CPF,CPF) == 0){
            printf("Entrada(E) / Saída (S): ");
            scanf(" %c", &entrasai);
            if (entrasai == 'S' || entrasai == 's'){
                func->status = 'A';
                time(&func->saida);
                strcpy(l->CPF,func->CPF);
                time(&l->horario);
                l->evento = 'S';
            } else if (entrasai == 'E' || entrasai == 'e'){
                func->status = 'P';
                time(&func->entrada);
                strcpy(l->CPF,func->CPF);
                time(&l->horario);
                l->evento = 'E';
            } else {
                printf("Opcao inválida\n");
                break;
            }
            fseek(funcionarios,-sizeof(struct funcionario),SEEK_CUR);
            fwrite(func,sizeof(struct funcionario),1,funcionarios);
            fwrite(l,sizeof(Log),1,log);
            break;
        }
        else if (feof(funcionarios)){
            printf("Funcionario inexistente, ou CPF digitado incorretamente.\n");
            printf("Inserir um novo funcionario: [s] - sim [n] - nao\n");
            char c;
            scanf(" %c",&c);
            if (c == 's'){
                printf("CPF: ");
                scanf("%s", func->CPF);
                printf("Nome: ");
                scanf("%s", func->nome);
                fwrite(func,sizeof(struct funcionario),1,funcionarios);
                printf("\nFuncionario registrado.\nFazer login para registrar entrada ou saida.\nBem vindo.\n");
                break;
            } else {
                printf("Opcao invalida. Retornando.....\n\n");
                break;
            }
        }
    }
    free(func);
    free(l);
}

void listagem_funcionarios(FILE *funcionarios){
    rewind(funcionarios);
    struct funcionario *func = (struct funcionario*) malloc(sizeof(struct funcionario));
    if (func == NULL){
        printf("Memoria insuficiente");
        return;
    }
    while(1){
        fread(func,sizeof(struct funcionario),1,funcionarios);
        printf("CPF: %s\n",func->CPF);
        printf("Nome: %s",func->nome);
        if (func->entrada == 0){
            printf("  Entrada: --- Entrada nao cadastrada\n");
        } else {
            printf("  Entrada: %s", ctime(&func->entrada));
        }
        if (func->saida == 0){
            printf("  Saida: --- Saida nao cadastrada\n");
        } else {
            printf("  Saida: %s",ctime(&func->saida));
        }
        if (func->status == ' '){
            printf("  Status: --- Entrada ou saida nao registrada\n =======================\n");
        }else if (func->status == 'P'){
            printf("  Status: Presente\n =======================\n");
        }else if (func->status == 'A')
            printf("  Status: Ausente\n =======================\n");
        
        if(feof(funcionarios)){
            printf("====================  Fim do arquivo de FUNCIONARIOS  ====================\n");
            break;
        }
    }
    free(func);
}

void listagem_log(FILE *log) {
    rewind(log);
    char CPF[12];
    Log *l = (Log *) malloc(sizeof(Log));
    if (l == NULL){
        printf("Memoria insuficiente\n");
        return;
    }
    printf("Entre com o CPF do funcionario:\n");
    scanf("%s", CPF);
    printf ("\nOs logs do funcionario de CPF = %s se encontram abaixo.\n =======================\n",CPF);
    while(1){
        fread(l,sizeof(Log),1,log);
        if(feof(log)){
            printf("====================  Fim do arquivo de LOG  ====================\n");
            break;
        } else if (strcmp(CPF,l->CPF)==0){
            printf("CPF: %s\n",l->CPF);
            printf("Horario: %s",ctime(&l->horario));
            if (l->evento == 'E')
                printf("Status: Entrada\n =======================\n");
            if (l->evento == 'S')
                printf("Status: Saida\n =======================\n");
        }
    }

}

int main() {
    // abrir arquivos (completar). Sugestão: tentar abrir com "rb+", e se não abrir, tentar abrir com "wb+",
	// e se não abrir, informar o usuário que não foi possível
    FILE *funcionarios;
    FILE *log;
    funcionarios = fopen("funcionarios.bin","rb+");
    log = fopen("log.bin","rb+");
    if (funcionarios == NULL ){
        funcionarios = fopen("funcionarios.bin","wb+");
    }

    if(!log){
        log = fopen("log.bin", "wb+");
    }

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