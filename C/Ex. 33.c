#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int numeros[10];

    printf("Digite os 10 numeros:\n");
    
    for(int i=0; i<10; i++)
    {
        scanf("%i", &numeros[i]);
    }
    
    printf("Os numeros digitados em ordem inversa foram:\n");
  
    for(int i=9; i>=0; i--)
    {
        printf("%i \n", numeros[i]);
    }
}