#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float c, f;

    printf ("Digite o valor em graus celcius:\n");
    scanf ("%f", &c);

    f=(c*1.8)+32;

    printf ("\nO valor correspondente em Fahrenheit vale:\n%.2f", f);
}