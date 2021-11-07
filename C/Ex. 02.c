#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int l, a;

    printf ("Digite o valor do lado do quadrado: \n");
    scanf ("%i", &l);

    a=l*l;

    printf ("\nO valor da area equivale a:\n%i", a);

    return 0;
}
