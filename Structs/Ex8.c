#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
 char nome[100];
 int idade;
 char sexo;
 char cpf[15];
 char nascimento[12];
 int codigo_setor;
 char cargo[30];
 float salario;
};

int main(){

    struct pessoa funcionario;
    printf("\n-------Digite dados do funcionario------\n");

printf("Nome:\n");
fgets(funcionario.nome,100,stdin);
funcionario.nome [strcspn(funcionario.nome,"\n")]=0;

printf("Idade:\n");
scanf("%d", &funcionario.idade);
getchar();

printf("Sexo (M/F)\n");
scanf("%c", &funcionario.sexo);
getchar();

printf("CPF:\n");
fgets(funcionario.cpf,15,stdin);
funcionario.cpf[strcspn(funcionario.cpf, "\n")]=0;

printf("Data de Nascimento:\n");
fgets(funcionario.nascimento,12,stdin);
funcionario.nascimento[strcspn(funcionario.nascimento, "\n")]=0;

printf("Codigo do setor:\n");
scanf("%d", &funcionario.codigo_setor);
getchar();

printf("Cargo que ocupa:\n");
fgets(funcionario.cargo,30,stdin);
funcionario.cargo[strcspn(funcionario.cargo, "\n")]=0;

printf("Salario:\n");
scanf("%f", &funcionario.salario);
getchar();

printf("---------Imprimindo dados do funcionario---------");
printf("Nome:%s\n",funcionario.nome);
printf("Idade:%d\n",funcionario.idade);
printf("Sexo (M/F):%c\n",funcionario.sexo);
printf("CPF:%s\n",funcionario.cpf);
printf("Data de Nascimento:%s\n",funcionario.nascimento);
printf("Codigo do setor:%d\n",funcionario.codigo_setor);
printf("Cargo que ocupa:%s\n",funcionario.cargo);
printf("Salario:%.2f\n",funcionario.salario);

}