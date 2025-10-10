#include <stdio.h>
#include <stdlib.h>

int main (){
    int loteria[6], bilhete[6],corretos=0;
    int  *vetor,k=0;

    printf("Digite os 6 numeros da loteria:\n");
    for(int i=0;i<6;i++){
        scanf("%d", &loteria[i]);
    }

    printf("Digite os 6 numeros do seu bilhete:\n");
    for(int i=0;i<6;i++){
        scanf("%d", &bilhete[i]);
    }

    for(int i=0;i<6;i++){
       for(int j=0;j<6;j++){
            if(loteria[i]== bilhete[j]){
            corretos ++;
            break;
            }
       }
    }
    vetor = (int*) malloc (corretos* (sizeof(int)));
            if(vetor==NULL){
                printf("Erro para alocar memoria\n");
                return 1;
            }
    
      for(int i=0;i<6;i++){
       for(int j=0;j<6;j++){
            if(loteria[i]== bilhete[j]){
             vetor[k]= bilhete[j];
             k++;
             break;
            }
       }
      }

    
    printf("Numeros sorteados:\n");
    for(int i=0;i<6;i++){
        printf("%d\t",loteria[i]);
    }
    printf("\n");

    if(corretos==0){   
    printf("Voce nao acertou nenhum numero\n");
    }
    else{
        printf("Voce acertou %d numeros:\n",corretos);
        for(int i=0;i<corretos;i++){
            printf("%d\t",vetor[i]);
        }
    }

    free(vetor);
    return 0;

}