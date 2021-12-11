#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct endereco
{
   char rua[100];
   char cep[9];
   int num;
};

struct pessoa{
    char nome[100];
    int idade;
    struct endereco end;
};

void mostraEstrutura(struct pessoa p);

int main(void)
{
    struct pessoa p1;

    fgets(p1.nome,sizeof(p1.nome),stdin);
    strtok(p1.nome,"\n");
    scanf("%d%*c",&p1.idade);

    fgets(p1.end.rua,sizeof(p1.end.rua),stdin);
    strtok(p1.end.rua,"\n");
    fgets(p1.end.cep,sizeof(p1.end.cep),stdin);
    strtok(p1.end.cep,"\n");
    scanf("%d%*c",&p1.end.num);

    mostraEstrutura(p1);
    return 0;
}

void mostraEstrutura(struct pessoa p){
    printf("\n Nome: %s",p.nome);
    printf("\n Idade: %d",p.idade);
    printf("\n Rua: %s",p.end.rua);
    printf("\n CEP: %s",p.end.cep);
    printf("\n Num: %d",p.end.num);
}
