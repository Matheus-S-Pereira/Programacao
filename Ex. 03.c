#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float b, h, a;

    printf ("Digite o valor da altura do tringulo:\n");
    scanf ("%f", &b);

    printf ("Digite o valor da base do triangulo:\n");
    scanf ("%f", &h);

    a=(b*h)/2;

    printf ("\nO valor da area equivale a:\n%.2f", a);

    return 0;
}
