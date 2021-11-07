#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float n1, n2;

    printf ("Digite um numero qualquer: ");
    scanf ("%f", &n1); 

    printf ("Digite outro numero qualquer: ");
    scanf ("%f", &n2); 

    printf ("\nO menor dos dois numeros e: ");
    
    if(n1>n2)
    {
        printf ("%.1f", n2);
    }

    else
    {
        printf ("%.1f", n1);
    }
}