#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct endereco
{
   char nome[100];
   char rua[200];
   int num;
};

int main(int argc, char const *argv[])
{
    /* teste com alocação dinamica de memória para estrutura ponteiro;
    struct endereco *end;
    end = malloc(sizeof(struct endereco));

    fgets(end->nome,sizeof(end->nome),stdin);
    strtok(end->nome,"\n");
    fgets(end->rua,sizeof(end->rua),stdin);
    strtok(end->nome,"\n");
    scanf("%d%*c",&end->num);

    printf("\n%s",end->nome);
    printf("\n%s",end->rua);
    printf("\n%d",end->num);*/

    struct endereco end1;
    fgets(end1.nome,sizeof(end1.nome),stdin);
    strtok(end1.nome,"\n");
    fgets(end1.rua,sizeof(end1.rua),stdin);
    strtok(end1.rua,"\n");
    scanf("%d%*c",&end1.num);

    struct endereco *endPoint;
    endPoint = &end1;
    endPoint->num = 456; //mudamos o valor do campo num atraves do ponteiro;
    /*
    teste para printar os campos da estrutura pelo ponteiro;
    printf("\n%s",endPoint->nome);
    printf("\n%s",endPoint->rua);
    printf("\n%d",endPoint->num);*/

    printf("\n%s",end1.nome);
    printf("\n%s",end1.rua);
    printf("\n%d",end1.num);
    return 0;
}
