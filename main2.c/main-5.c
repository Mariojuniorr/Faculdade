//Nome: Otavio Rochael Cunha. Matricula: 12211BSI218
//Nome: Mário Lúcio Santos Júnior. Matricula: 12211BSI252

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define QUANTIDADE 21

int main() {
    char temp[12];
    char lista[QUANTIDADE][12] = { "Vinicius", "Guilherme", "Vitor", "Lucas", "Igor", "Joao",
                                    "Pedro", "Abel", "Luiz", "Wemerson", "Rafael", "Pablo",
                                    "Saint", "Thais", "Matheus", "Douglas", "Gabriel",
                                    "Viviane", "Reginaldo", "Jose", "Leonardo" };
    
    printf("Antes de ordenar:\n=====================\n");
    for (int i = 0; i < QUANTIDADE; i++)
        printf("%s\n",lista[i]);
    
    for (int i = 0; i < QUANTIDADE; i++){
        for (int j=0; j < QUANTIDADE; j++){
            if(strcmp(lista[j], lista[j+1]) > 0){
                strcpy(temp, lista[j]);
                strcpy(lista[j], lista[j+1]);
                strcpy(lista[j+1], temp);
            }
        }
    }
        
    printf("\n\nApos ordenar:\n=====================\n");    
    for (int i = 0; i < QUANTIDADE; i++)
        printf("%s\n",lista[i]);
            
    return 0;
}
