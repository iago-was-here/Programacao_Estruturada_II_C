//utilizando structs devemos implementar um código que receba a quantidade de retas e as coordenadas x e y para o calculo da maior reta

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point{
    double a,b;
};

struct reta{
    struct point p1;
    struct point p2;
    double size;
    int pos;
};

struct reta maioReta(struct reta r[],int tam);

int main(void)
{
    int qnt;

    scanf("%d%*c",&qnt);
    struct reta r1[qnt];

    for(int i = 0; i < qnt; i++){
        scanf("%lf",&r1[i].p1.a);
        scanf("%lf",&r1[i].p1.b);
        scanf("%lf",&r1[i].p2.a);
        scanf("%lf",&r1[i].p2.b);
    }
    
    struct reta r2 = maioReta(r1,qnt);
    printf("Reta numero %d, pontos [%.0lf,%.0lf] e [%.0lf,%.0lf], tamanho %.2lf.", r2.pos, r2.p1.a, r2.p1.b, r2.p2.a, r2.p2.b, r2.size);
    return 0;
}

struct reta maioReta(struct reta r[],int tam){
    struct reta r2;
    double soma = 0;
    r2.size = 0;
    for(int i = 0; i < tam; i++){
        soma = pow((r[i].p2.a - r[i].p1.a),2) + pow((r[i].p2.b - r[i].p1.b),2) ;
        r[i].size = sqrt(soma);
        if(r[i].size > r2.size){
            r2 = r[i];
            r2.pos = i;
        }
    }
    return r2;
}
