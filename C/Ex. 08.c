#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float p, a, IMC;

    printf ("Digite o valor do peso em Kg:\n");
    scanf ("%f", &p);

    printf ("Digite o valor da altura em metros:\n");
    scanf ("%f", &a);

    IMC=p/(a*a);

    printf ("\nO valor do IMC vale:\n%.2f", IMC);
}