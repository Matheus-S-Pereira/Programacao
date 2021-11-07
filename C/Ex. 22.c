#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float n;

    printf ("Digite um valor positivo: ");
    scanf ("%f", & n);

    while (n<=0)
    {
        printf ("\nvalor invalido, digite outro que seja positivo:");
        scanf ("%f", & n);
    }
    
    printf ("\nValor aceito, obrigado");
}