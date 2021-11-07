#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    int q, n, t;
    int *valores;


    printf("Digite quantos numeros deseja armazenar:\n");
    scanf("%i", & q);

    valores = (int*)malloc(q*sizeof(int));

    printf("\nDigite os numeros:\n");

    for(int i=0; i<q; i++)
    {
        scanf("%i", & valores[i]);      
    }

    conferindo:

    printf("\nDigite o numero que deseja saber onde foi armazenado:\n");
    scanf("%i", & n);

    for (size_t i=0; i<q; i++)
    {
        if (valores[i]==n)
        {
            printf("\n\n salvo na memoria de numero %i\n\n", i);
        }
        else
        {
            printf("\n\nValor nao encontrado");
        }
    } 

    printf("\n\nSe quiser tentar mais uma vez digite '1' caso contrario digite '2':\n");
    scanf("%s", & t);

    if (t==1)
    {
        goto conferindo;
    }
    else
    {
        printf("\nok");
    }
}