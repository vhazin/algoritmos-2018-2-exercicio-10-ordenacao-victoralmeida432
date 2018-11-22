#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_lista 100
#define max_nome 21

typedef struct{
    char nome[max_nome];
}Kid;

int main(void){
    int number,comportou,nao_comportou,aux,j,k;
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
        for(j = 0; j < number; i++){
            for(k = j + 1; k < number; k++){
                if(strcmp(max_lista[k], max_lista[j]) == -1){
                    strcpy(aux, max_lista[j]);
                    strcpy(max_lista[i], max_lista[k]);
                    strcpy(max_lista[k], max_nome);
            }
            }
        }
            for (int i = 0; i < number;i++)
                printf("%s\n",lista[i].nome);
            printf("se comportaram: %d | Nao se comportaram: %d\n",comportou,nao_comportou);
        
        
        return 0;
}
