#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define nome_max 21
#define max_kids 100

typedef struct kids{
    char nome[nome_max];
}kid;

void swap (kid *head, kid *tail){
    kid temp = *head;
    *head = *tail;
    *tail = temp;
}

int partition (kid array[],int menor, int maior){
    int i = (menor - 1), x = 0;
    for (int j = menor; j <= maior - 1;j++){
        if (strcmp(array[j].nome,array[maior].nome) <= 0){
            i++;
            swap(&array[i],&array[j]);
        }
    }
    swap(&array[i + 1],&array[maior]);
    return (i + 1);
}

void quickSort(kid array[],int menor,int maior){
    if (menor < maior){
        int pi = partition(array,menor,maior);
        quickSort(array,menor,pi - 1);
        quickSort(array,pi + 1,maior);

    }
}

int main(void){
    int tamanho;
    char especial,cont = 0;
    kid kidslist[max_kids];
    scanf("%d",&tamanho);
    for(int i = 0; i < tamanho;i++){
        scanf(" %c ",&especial);
        if(especial == '+')
            cont++;
        scanf("%s",kidslist[i].nome); 
    }
    quickSort(kidslist,0,tamanho - 1);
    for (int x = 0; x < tamanho; x++){
        printf("%s\n",kidslist[x].nome);
    }
    printf("Se comportaram: %d | Nao se comportaram: %d\n",cont,tamanho - cont);

    return 0;
}
