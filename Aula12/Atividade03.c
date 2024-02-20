#include <stdio.h>

int main()
{
  int n;
  printf("Digite um numero para ver sua tabuada: ");
  scanf("%d", &n);
  for (int x = 1; x < 11; x++)
  {
    printf("\n%d x %d = %d", n, x, (n * x));
  }
  printf("\n\n");
  return 0;
}