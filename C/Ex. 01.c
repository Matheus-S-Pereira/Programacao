#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int b, h, a;

    printf ("Digite o valor da Base:\n");
    scanf ("%i", &b);

    printf ("Digite o valor da Altura:\n");
    scanf ("%i", &h);

    a=b*h;

    printf ("\nO valor da area corresponde a: \n %i", a);

    return 0;
}
