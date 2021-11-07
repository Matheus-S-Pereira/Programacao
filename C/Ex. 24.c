#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char sexo, M, F;

    printf("Digite o sexo (M/F): ");
    scanf("%s", &sexo);

    while ((toupper(sexo)!='M') && (toupper(sexo)!='F'))
    {
        printf ("Sexo invalido, digite novamente: ");
        scanf ("%s", &sexo);
    }
    
    printf ("Aceito");
}    