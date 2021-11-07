#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float n1, n2;

    printf ("Digite um numero qualquer: ");
    scanf ("%f", &n1); 

    printf ("Digite outro numero qualquer: ");
    scanf ("%f", &n2); 
    
    if(n1>n2)
    {
        printf ("\nO maior dos dois numeros e: %.1f", n1);
    }

    else
    {
        if(n1<n2)
        {
        printf ("\nO maior dos dois numeros e: %.1f", n2);
        }

        else
        {
            printf ("\nOs dois numeros sao iguais");
        }
    }
}