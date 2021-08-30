#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float l1, l2, l3;

    printf ("Digite o valor de um dos lados do triangulo: ");
    scanf ("%f", &l1);

    printf ("Digite o valor do outro lado do triangulo: ");
    scanf ("%f", &l2);

    printf ("Digite o valor do ultimo lado do triangulo: ");
    scanf ("%f", &l3);

    if (l1>(l2+l3))
    {
        printf ("Nao forma um triangulo");
    }
    else
    {
        if (l2>(l1+l3))
        {
            printf("Nao forma um triangulo");
        }
        else
        {
            if (l3>(l1+l2))
            {
                printf("Nao forma um triangulo");
            }
            else
            {
                if (l1==l2 && l2==l3)
                {
                     printf ("Triangulo Equilatero");
                }
                else
                {
                    if (l1==l2 || l1==l3 || l2==l3)
                    {
                     printf ("Triangulo isosceles");
                    }
                    else
                    {
                        if (l1!=l2 && l1!=l3 && l2!=l3)
                        {
                        printf ("Triangulo Escaleno");
                        }
                    }
                }           
    
            }
        }
    }
}