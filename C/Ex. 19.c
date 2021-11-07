#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float a, t, v0, v, vf ;

    printf ("Digite o valor da aceleracao: ");
    scanf ("%f", & a);

    printf ("Digite o tempo levado no percurso: ");
    scanf ("%f", & t);

    printf ("Digite a velocidade inicial: ");
    scanf ("%f", & v0);

    v=v0+a*t;

    vf=v*3.6;

    if (vf<=40)
    {
        printf ("Veiculo Muito lento");
    }

    else 
    {
        if (vf>40 && vf<=60)
        {
            printf ("Velocidade permitida");
        }

        else 
        {
            if (vf>60 && vf<=80)
            {
                printf ("Velocidade de cruzeiro");
            }

            else 
            {
                if (vf>80 && vf<=120)
                {
                    printf ("Veiculo rapido");
                }

                else 
                {
                    printf ("Veiculo muito rapido");
                }
            }
        }        
    }
}