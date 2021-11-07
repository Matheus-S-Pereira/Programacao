#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
 
int main(int argc, char *argv[])
{
  
  int c;
  int numeros[2][3];
 
  printf("Digite os numeros para matriz 2 x 3 \n");
  for(int i=0; i<2; i++)
    {
      for(int j=0; j<3; j++)
      {
        scanf("%i", &numeros[i][j]);
      }
    }
 
  printf("\nOs numeros digitados na matriz foram: \n");
  for(int i=0; i<2; i++)
    {
      for(int j=0; j<3; j++)
      {
        printf("%i ", numeros[i][j]);
      }
      printf("\n");
    }

  printf("\nDigite um valor para multiplicar a matriz: \n");
  scanf("%i", & c);

  printf("\nA nova matriz ficou: \n");

  for(int i=0; i<2; i++)
    {
      for(int j=0; j<3; j++)
      {
          numeros[i][j]=numeros[i][j]*c;
        printf("%i ", numeros[i][j]);
      }
      printf("\n");
    }
}