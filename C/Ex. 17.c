#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float l1, l2, l3, a, b, c;

    printf ("Digite o valor de um dos lados do triangulo: ");
    scanf ("%f", &l1);

    printf ("Digite o valor do outro lado do triangulo: ");
    scanf ("%f", &l2);

    printf ("Digite o valor do ultimo lado do triangulo: ");
    scanf ("%f", &l3);

    a=l1*l1;
    b=l2*l2;
    c=l3*l3;

    if ( ((a)==(l2*l2)+(l3*l3)) || ((b)==(l1*l1)+(l3*l3)) || ((c)==(l1*l1)+(l2*l2)) )
    {
        printf ("\nForma um Triangulo retangulo");
    }

    else
    {
        printf ("\nNao forma um triangulo retangulo");
    }
}