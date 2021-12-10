#include <stdio.h>
#include <string.h>

/* Este é um exemplo de declaração errada de struct que gera um erro de compilação;
structure hotel{
    int items;
    char name[10];
}a;

int main(void)
{
    strcpy(a.name,"TAJ");
    a.items = 10;
    printf("%s",a.name);
    return 0;
}*/

/* Teste com atribuição de variavéis struct
struct ship{
    char color[10];
}boat1,boat2;

int main(void)
{
    strcpy(boat1.color,"RED");
    printf("%s",boat1.color);
    boat2 = boat1;
    strcpy(boat2.color,"YELLOW");
    printf("%s",boat2.color);
    return 0;
}*/


/* Exemplo de comparação entre structs que gera erro de compilação;
struct raizes
{
    double x1;
    double x2;
};

int main(void)
{
    struct raizes r1 = {1.0, 2.0};
    struct raizes r2 = {1.0, 2.0};

    if(r1 == r2){
        printf("sim");
    }else{
        printf("nao");
    }
    return 0;
}*/

/* Correção do exemplo anterior;
struct raizes
{
    double x1;
    double x2;
};

int main(void)
{
    struct raizes r1 = {1.0, 2.0};
    struct raizes r2 = {1.0, 2.0};
    struct raizes *ptr1, *ptr2;
    ptr1 = &r1;
    ptr2 = &r2;

    if(ptr1 == ptr2){
        printf("sim");
    }else{
        printf("nao");
    }
    return 0;
}*/

struct raizes
{
    double x1;
    double x2;
};

int main(void)
{
    struct raizes *ptr, r1 = {3.0, 2.0};
    ptr = &r1;
    ptr->x1 = 20.0;
    printf("%.2lf %.2lf", r1.x1, r1.x2);
    return 0;
}
// exemplo altera valor ao campo da estrutura por meio do ponteiro



