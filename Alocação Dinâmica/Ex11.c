#include <stdio.h>
#include <stdlib.h>

struct dados{
    int matricula;
    char sobrenome[50];
    int nascimento;  
};
typedef struct dados dados;

int main (){
    dados *aluno;
    int numero_alunos;
    int i;
printf("Digite o numero de alunos");
scanf("%d",&numero_alunos);

aluno= (dados*) malloc (numero_alunos*(sizeof(dados)));

if(aluno==NULL){
    printf("Falha na alocação de memória\n");
    return 1;
}

printf("Digite as informações\n");
    for(i=0;i<numero_alunos;i++){
        printf("Matricula:\n"); scanf("%d",&aluno[i].matricula);
        printf("Sobrenome:\n"); scanf("%s",aluno[i].sobrenome);
        printf("Ano de Nascimento:\n"); scanf("%d",&aluno[i].nascimento);
    }
printf("Dados armazenados:\n");
    for (i =0; i<numero_alunos; i++){
        printf("Matricula:%d\n", aluno[i].matricula);
        printf("Sobrenome:%s\n", aluno[i].sobrenome);
        printf("Nascimento;%d\n",aluno[i].nascimento);
    }
free(aluno);
return 0;
}