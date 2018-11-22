#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_lista 100
#define max_nome 21

typedef struct{
    char nome[max_nome];
}Kid;

int main(void){
    int number,comportou,nao_comportou,aux;
    char especial;
    Kid lista[max_lista];
    scanf("%d",&number);
    for(int i = 0,comportou = 0, nao_comportou = 0;i < number;i++){
        scanf("%c %s",&especial,lista[i].nome);
        if(especial == '+'){
            comportou++;
        }else{
            nao_comportou++;
        }
        for(int j = 0; j < number; i++){
            for(int k = j + 1; k < number; k++){
                if(strcmp(lista[k], lista[j]) == -1){
                    strcpy(aux, lista[j]);
                    strcpy(lista[i], lista[k]);
                    strcpy(lista[k], max_nome);
            }
            }
        }
            for (int i = 0; i < number;i++)
                printf("%s\n",lista[i].nome);
            printf("se comportaram: %d | Nao se comportaram: %d\n",comportou,nao_comportou);
        
        
        return 0;
}
