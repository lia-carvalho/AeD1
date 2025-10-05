#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados_aluno{
char nome[100];
int matricula;
char curso[100];
};

typedef struct dados_aluno dados;

int main(){
dados aluno[5];

printf("Digite dados do aluno:\n");
for(int i=0;i<5;i++){
    printf("Nome:\n");
    fgets(aluno[i].nome,100,stdin);
    aluno[i].nome [strcspn(aluno[i].nome,"\n")]=0;
    printf("Matricula:\n");
    scanf("%d",&aluno[i].matricula);
    getchar();
    printf("Curso:\n");
    fgets(aluno[i].curso,100,stdin);
    aluno[i].curso [strcspn(aluno[i].curso,"\n")]=0;
}

printf("\nImprimindo dados dos alunos...\n");
for(int i=0;i<5;i++){
    printf("Nome:%s\n",aluno[i].nome);
    printf("Matricula:%d\n",aluno[i].matricula);
    printf("Curso:%s\n",aluno[i].curso);
}
return 0;
}