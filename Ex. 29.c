#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float n, s, p;

    s=0;

    printf ("Soma dos numeros de 1 a 100:\n");

    for (size_t n = 0; n < 100; n++)
    {
        p=n+1;
        s=s+p;

    }
     
     printf("%.0f", s);
    
}