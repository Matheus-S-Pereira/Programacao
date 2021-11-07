#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float p1, p2, p3, p4, p5, pag, t;

    printf ("Digite o valor do produto 1:\n");
    scanf ("%f", &p1);

    printf ("Digite o valor do produto 2:\n");
    scanf ("%f", &p2);

    printf ("Digite o valor do produto 3:\n");
    scanf ("%f", &p3);

    printf ("Digite o valor do produto 4:\n");
    scanf ("%f", &p4);

    printf ("Digite o valor do produto 5:\n");
    scanf ("%f", &p5);

    printf ("Digite o valor usado para fazer o pagamento:\n");
    scanf ("%f", &pag);

    t=pag-(p1+p2+p3+p4+p5);

    printf ("\nO valor do troco para essa compra vale:\n%.2f", t);
}