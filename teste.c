#include <stdio.h>
#include <string.h>

struct endereco
{
   char nome[100];
   char rua[200];
   int num;
};

int main(int argc, char const *argv[])
{
    struct endereco end1,end2;
    fgets(end1.nome,sizeof(end1.nome),stdin);
    strtok(end1.nome,"\n");
    fgets(end1.rua,sizeof(end1.rua),stdin);
    strtok(end1.rua,"\n");
    scanf("%d%*c",&end1.num);

    printf("\n%s",end1.nome);
    printf("\n%s",end1.rua);
    printf("\n%d",end1.num);

    end2 = end1;
    printf("End2");
    printf("\n%s",end2.nome);
    printf("\n%s",end2.rua);
    printf("\n%d",end2.num);
    return 0;
}
