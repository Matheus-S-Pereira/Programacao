#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float n1, n2, r, q;

    n1=1;
    n2=1;

    printf ("%.0f, %.0f, ", n1, n2);

    for (size_t q = 1; q <=28; q++)
    {
        r=n1+n2;
        
        printf ("%.0f, ", r);
        
        n2=n1;
        n1=r;
    }
}