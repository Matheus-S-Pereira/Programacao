#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float r, p, a;

    printf ("Digite seu peso em Kg: ");
    scanf ("%f", &p);

    printf ("Digite sua altura em metros: ");
    scanf ("%f", &a);

    r=p/(a*a);

    if (r<20)
    {
        printf ("Abaixo do Peso");
    }
    else
    {
        if (20<=r && r<=25)
        {
            printf ("Peso ideal");
        }
        else
        {
            printf ("Acima do Peso");
        }
    }
}