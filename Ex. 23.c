#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float n1, n2;

    printf ("Digite um valor: ");
    scanf ("%f", & n1);

    printf ("Digite um valor maior que o anterior:");
    scanf ("%f", & n2);

    while (n1>=n2)
    {
        printf ("Valor insulficiente, digite um valor maior que o primeiro:");
        scanf ("%f", & n2);
    }
    
    printf ("Valor aceito, obrigado");
}    