#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int c;
    int valores[20];
    int novos[20];

    printf("Digite 20 numeros:\n");
    
    for(int i=0; i<20; i++)
    {
        scanf("%i", & valores[i]);      
    }

    printf("\nDigite um valor qua ira multiplicar os numeros anteriores:\n");
    scanf("%i", & c);

    printf("\nOs numeros resultantes depois de multiplicar foram:\n");

    for(int i=0; i<20; i++)
    {
        novos[i]=valores[i]*c;
        printf("%i\n", novos[i]);
    }
}