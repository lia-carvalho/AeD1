#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados_pessoa{
    char nome[50];
    int idade;
    char endereco[100];
};

typedef struct dados_pessoa dados;

int main(){
    dados pessoa;

printf("Digite nome:\n");
fgets(pessoa.nome, 50,stdin);
pessoa.nome [strcspn(pessoa.nome, "\n")]=0;

printf("Digite idade:\n");
scanf("%d", &pessoa.idade);
getchar();

 printf("Digite endereço:\n");
 fgets(pessoa.endereco, 100,stdin);
pessoa.endereco [strcspn(pessoa.endereco, "\n")]=0;

printf("\n-----Dados----\n");
printf("Nome:%s\n",pessoa.nome);
printf("Idade:%d\n",pessoa.idade);
printf("Endereço:%s\n",pessoa.endereco);

return 0;
}