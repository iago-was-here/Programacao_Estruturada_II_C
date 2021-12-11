#include <stdio.h>
#include <stdlib.h>

struct matriz{
    int tamL;
    int tamC;
    int itens[1000][1000];
};

void mostraMatriz(struct matriz mat);


int main(void)
{
    struct matriz m;
    int i,j;

    scanf("%d",&m.tamL);
    scanf("%d",&m.tamC);

    for(i = 0; i < m.tamL;i++){
        for(j = 0; j < m.tamC;j++){
            scanf("%d",&m.itens[i][j]);
        }
    }

    mostraMatriz(m);
    return 0;
}

void mostraMatriz(struct matriz mat){
    int i,j;

    for(i = 0; i < mat.tamL;i++){
        for(j = 0; j < mat.tamC;j++){
            printf("%d",mat.itens[i][j]);
        }
    }
}
