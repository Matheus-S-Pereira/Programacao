#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float a, b, c, d, m;

    printf ("Digite o primeiro valor:\n");
    scanf ("%f", &a);

    printf ("Digite o segundo valor:\n");
    scanf ("%f", &b);

    printf ("Digite o terceiro valor:\n");
    scanf ("%f", &c);

    printf ("Digite o quarto valor:\n");
    scanf ("%f", &d);

    m=(a+b+c+d)/4;

    printf ("\nO valor medio dos valores equivale a:\n%.2f", m);

    return 0;
}
