#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n;
    int numeros[10];

    printf("Digite 10 numeros:\n");
    
    for(int i=0; i<10; i++)
    {
        scanf("%i", &numeros[i]);

        if (numeros[i]>n)
        {
            n=numeros[i];
        }
        
    }
    printf("\nO maior numero digitado foi: %i", n);
}