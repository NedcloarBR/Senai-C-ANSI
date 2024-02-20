#include <stdio.h>
#define NUM_L 3
#define NUM_C 3

int main()
{
  float matriz[NUM_L][NUM_C], dP, dS, D;
  printf("\n\nEste programa calcula o determinante de uma matriz 3x3");
  printf("\n\t  _______________");
  printf("\n\t |               |");
  printf("\n\t |  1    2    3  |");
  printf("\n\t |               |");
  printf("\n\t |  4    5    6  |");
  printf("\n\t |               |");
  printf("\n\t |  7    8    9  |");
  printf("\n\t |_______________|\n");

  for (int i = 0; i < NUM_L; i++)
  {
    for (int j = 0; j < NUM_C; j++)
    {
      printf("Digite o %d° elemento da matriz: ", j + 1);
      scanf("%f", &matriz[i][j]);
    }
  }

  dP = (matriz[0][0] * matriz[1][1] * matriz[2][2]) + (matriz[0][1] * matriz[1][2] * matriz[2][0]) + (matriz[0][2] * matriz[1][0] * matriz[2][1]);
  dS = (matriz[0][2] * matriz[1][1] * matriz[2][0]) + (matriz[0][0] * matriz[1][2] * matriz[2][1]) + (matriz[0][1] * matriz[1][0] * matriz[2][2]);
  D = dP - dS;

  printf("\n\nConteúdo da Matriz declarada: \n");

  for (int l = 0; l < NUM_L; l++)
  {
    for (int c = 0; c < NUM_C; c++)
    {
      printf("%3.1f   ", matriz[l][c]);
    }
    printf("\n");
  }
  printf("\nDeterminante Principal: %2.1f\nDeterminante Secundário: %2.1f\nDeterminante da Matriz: %2.1f\n", dP, dS, D);

  return 0;
}