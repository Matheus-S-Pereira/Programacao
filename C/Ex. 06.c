#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float c, d, r;

    printf ("Digite o valor da cotação do dolar:\n");
    scanf ("%f", &c);

    printf ("Digite a quantidade de dolares a ser convertida:\n");
    scanf ("%f", &d);

    r=c*d;

    printf ("\nO valor correspondente em reais vale:\n%.2f", r);
}