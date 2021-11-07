#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float m, p1, p2;

    printf ("Digite o valor da p1: ");
    scanf ("%f", & p1);

    printf ("Digite o valor da p2: ");
    scanf ("%f", & p2);

    m=(p1+(2*p2))/3;

    printf ("Media final: %f", m);

    if (m>=5)
    {
        printf ("\nAluno aprovado");
    }

    else 
    {
        printf ("\nAluno Reprovado");
    }
}