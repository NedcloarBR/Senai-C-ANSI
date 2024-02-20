#include <stdio.h>

int main()
{
  int mat1[5], mat2[5], mat3[5], i;

  for (i = 0; i < 5; i++)
  {
    printf("\nDigite um número: ");
    scanf("%d", &mat1[i]);
  }

  for (i = 0; i < 5; i++)
  {
    printf("\nDigite um número: ");
    scanf("%d", &mat2[i]);
  }

  for (i = 0; i < 5; i++)
  {
    mat3[i] = mat1[i] + mat2[i];
    printf("\nSoma: %d", mat3[i]);
  }

  printf("\n\n");
  return 0;
}