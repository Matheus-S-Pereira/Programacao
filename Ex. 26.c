#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float r, n, t;

    t=0;

        printf ("Digite um valor positivo para ter sua tabuada: ");
        scanf ("%f", & n);

        while (n<0)
        {
            printf ("Valor invalido, digite um valor positivo: ");
            scanf ("%f", & n);
        }
        

        for (size_t; t <= 10; t++)
        {  
        r=t*n;
        printf ("\n %.0f x %.0f = %.0f", n, t, r);
        }
}