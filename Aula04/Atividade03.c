#include <stdio.h>
#define NUM_L 2
#define NUM_C 2

int main()
{
  float matriz[NUM_L][NUM_C], dP, dS, D;
  printf("\n\nEste programa calcula o determinante de uma matriz 2x2");
  printf("\n\t  __________");
  printf("\n\t |          |");
  printf("\n\t |  1    2  |");
  printf("\n\t |          |");
  printf("\n\t |  3    4  |");
  printf("\n\t |__________|");
  printf("\nDigite o primeiro elemento da matriz: ");
  scanf("%f", &matriz[0][0]);
  printf("Digite o segundo elemento da matriz: ");
  scanf("%f", &matriz[0][1]);
  printf("Digite o terceiro elemento da matriz: ");
  scanf("%f", &matriz[1][0]);
  printf("Digite o quarto elemento da matriz: ");
  scanf("%f", &matriz[1][1]);

  dP = matriz[0][0] * matriz[1][1];
  dS = matriz[0][1] * matriz[1][0];
  D = dP - dS;

  printf("\n\nConteúdo da Matriz declarada: \n");

  for (int l = 0; l < NUM_L; l++)
  {
    for (int c = 0; c < NUM_C; c++)
    {
      printf("%2.1f   ", matriz[l][c]);
    }
    printf("\n");
  }
  printf("\nDeterminante Principal: %2.1f\nDeterminante Secundário: %2.1f\nDeterminante da Matriz: %2.1f\n", dP, dS, D);

  return 0;
}