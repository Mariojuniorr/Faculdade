#include <stdio.h>
#include <stdlib.h>
#include <time.h> // biblioteca time.h
#include <string.h>

struct listagem_funcionario{
    char CPF[11];
    char nome[20];
    time_t entrada;
    time_t saida;
    char status;
};
struct log{
    long unsigned int CPF[11];
    time_t horario;
    char evento;
};
 
void registro(FILE *funcionarios, FILE *log) {
    struct listagem_funcionario registro;
    printf("CPF: ");
    scanf("%s", registro.CPF);
    
    rewind(funcionarios);
    fseek(funcionarios, sizeof(registro), SEEK_SET);
    fwrite("%d", registro.CPF, sizeof(long int), funcionarios);
    fwrite("%s", )
    printf("Entrada(E) / Saída(S): ");
    scanf("%s", &registro.status);
    fwrite("      Entrada(E) / Saída(S): %c   ", registro.status, sizeof(char), funcionarios);
    return;
}
 
void listagem_funcionarios(FILE *funcionarios) {
/*  rewind(funcionarios);
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
*/
}
 
void listagem_log(FILE *log) {
    struct log login;
    while(1){
        fread(&login,sizeof(struct log),1,log);
        if(feof(log)){
            break;
        }
        printf("CPF: %s", login.CPF);
        printf("Horario: %s", ctime(&login.horario));
        printf("Evento: %c", login.CPF);
    }
}
 
int main() {
    // abrir arquivos (completar). Sugestão: tentar abrir com "rb+", e se não abrir, tentar abrir com "wb+", 
    // e se não abrir, informar o usuário que não foi possível
    FILE *funcionarios = fopen("funcionarios.bin","rb+");
    FILE *log = log = fopen("log.bin","rb+");

    if(!log || !funcionarios){
        funcionarios = fopen("funcionarios.bin","wb+");
        log = fopen("log.bin","wb+");
    }
    
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