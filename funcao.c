#include <stdio.h>
#include <string.h>

struct endereco
{
   char nome[100];
   char rua[200];
   int num;
};

void mostraCampoStringEstrutura(char *texto){
    printf("\n%s",texto);
}

void mostraCampoIntEstrutura(int num){
    printf("\n%d",num);
}

void mostraEstruturaInteira(struct endereco end){
    printf("\n%s",end.nome);
    printf("\n%s",end.rua);
    printf("\n%d",end.num);
}

int main(int argc, char const *argv[])
{
    struct endereco end1;
    fgets(end1.nome,sizeof(end1.nome),stdin);
    strtok(end1.nome,"\n");
    fgets(end1.rua,sizeof(end1.rua),stdin);
    strtok(end1.rua,"\n");
    scanf("%d%*c",&end1.num);

    printf("\n%s",end1.nome);
    printf("\n%s",end1.rua);
    printf("\n%d",end1.num);

    printf("\nTeste Funcao");
    //mostraCampoStringEstrutura(end1.nome);
    //mostraCampoIntEstrutura(end1.num);
    mostraEstruturaInteira(end1);
    return 0;
}
