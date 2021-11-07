#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float b, h, a;

    printf ("Digite o valor da altura do terreno:\n");
    scanf ("%f", &b);

    printf ("Digite o valor da base:\n");
    scanf ("%f", &h);

    a=b*h;

    if (a>100)
    {
        printf ("\nTerreno Grande");
    }

    printf ("\nO valor da area equivale a:\n%.2f", a);
}