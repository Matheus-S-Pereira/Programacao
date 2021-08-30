#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float n1, n2, n3;

    printf ("Digite um numero qualquer: ");
    scanf ("%f", &n1); 

    printf ("Digite outro numero qualquer: ");
    scanf ("%f", &n2); 

    printf ("Digite outro numero qualquer: ");
    scanf ("%f", &n3); 
    
    if(n1>n2)
    {
        if (n3>n1)
        {
            printf ("\nO maior numero e: %.1f", n3);
        }
        else
        {
            printf ("\nO maior numero e: %.1f", n1);
        }
    }
    else
    {
        if (n3>n2)
        {
            printf ("\nO maior numero e: %.1f", n3);
        }
        else
        {
            printf("\nO maior numero e: %.1f", n2);
        }
    }
}