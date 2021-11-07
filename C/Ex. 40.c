#include <stdio.h>
 
int main(int argc, char *argv[]){
  int **numeros;
  int linhas;
  int colunas;
 
  printf("Digite a quantidade de linhas: ");
  scanf("%i", &linhas);
 
  printf("\nDigite a quantidade de colunas: ");
  scanf("%i", &colunas);
 
  numeros = (int**)malloc(linhas*sizeof(int));
 
  for(int i=0; i<linhas; i++){
      numeros[i] = (int*)malloc(colunas*sizeof(int));
  }
 
  printf("\nDigite os numeros para matriz %i x %i \n", linhas, colunas);
  for(int i=0; i<linhas; i++){
      for(int j=0; j<colunas; j++){
        scanf("%i", &numeros[i][j]);
      }
  }
 
  printf("\nOs numeros digitados na matriz foram: \n");
  for(int i=0; i<linhas; i++){
      for(int j=0; j<colunas; j++){
        printf("%i ", numeros[i][j]);
      }
      printf("\n");
  }
}
