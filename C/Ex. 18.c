#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
     float s, p, a, r;

    printf ("Digite o valor do seu peso em Kg: ");
    scanf ("%f", & p);

    printf ("Digite o valor da sua altura em metros: ");
    scanf ("%f", & a);

    printf ("Digite 1 se for do sexo masculino e 2 se for do sexo feminino: ");
    scanf ("%f", & s);

    r=p/(a*a);

    if (s==1)
    {
        if (r<20)
        {
            printf ("Abaixo do peso");
        }

        else 
        {
            if (r>=20 && r<=25)
            {
                printf ("Peso ideal");
            }

            else
            {
                printf ("Acima do peso");
            }
        }
    }

    else
    {
         if (r<19)
        {
            printf ("Abaixo do peso");
        }

        else 
        {
            if (r>=19 && r<=24)
            {
                printf ("Peso ideal");
            }

            else
            {
                printf ("Acima do peso");
            }
        }        
    }
}    