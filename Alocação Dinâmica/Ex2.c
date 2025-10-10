#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vetor, tamanho;

    printf("Digite o tamanho do vetor:\n");
    scanf("%d",&tamanho);

    vetor= (int*) malloc (tamanho* sizeof(int));

    if(vetor==NULL){
        printf("Erro ao alocar a memoria\n");
        return 1;
    }

    printf("Digite numeros para o vetor\n");
    for(int i =0;i<tamanho;i++){
           scanf("%d", &vetor[i]);
    }

    printf("Numeros lidos:\n");
    for(int i =0;i<tamanho;i++){
     printf("%d\t",vetor[i]);
    }

    free(vetor);
    return 0;
}