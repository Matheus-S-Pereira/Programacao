#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float t, r, m;

    m=1;

    while (m<=20)
    {
        printf ("\n\nPressione ENTER:\n");

        getch();

        t=0;

        printf ("\nTabuada do %f:\n", m);

        for (size_t; t <= 10; t++)
        {
            r=t*m;
            printf ("\n %.0f x %.0f = %.0f", m, t, r);
        }

        m=m+1;
        t=t+1;
    }
}