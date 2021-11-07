#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float r, n, a, b;

        printf ("Digite um valor positivo para ter sua tabuada: ");
        scanf ("%f", & n);

        while (n<0)
        {
            printf ("Valor invalido, digite um valor positivo: ");
            scanf ("%f", & n);
        }

        printf ("Digite o limite inferior da tabuada: ");
        scanf ("%f", & a);
        
        printf ("Digite o limite superior da tabuada: ");
        scanf ("%f", & b);

        while (a>=b)
        {
            printf ("Valor invalido, digite um valor maior que o limite inferior: ");
            scanf ("%f", & b);
        }

        for (size_t; b >= a; b--)
        {  
        r=b*n;
        printf ("\n %.0f x %.0f = %.0f", n, b, r);
        }
}