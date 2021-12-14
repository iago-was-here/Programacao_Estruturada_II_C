/* utilizando structs devemos receber a quantidade de vezes a ser calculada a distancia 
    entre os dois pontos, e então receber 4 valores correspondentes aos pontos a e b*/
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
};

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

        r1[i].size = sqrt(pow((r1[i].p2.a - r1[i].p1.a),2) + pow((r1[i].p2.b - r1[i].p1.b),2));
    }

    for(int i = 0; i < qnt; i++){
        printf("%.2lf\n",r1[i].size);
    }


    return 0;
}


