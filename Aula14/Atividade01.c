#include <stdio.h>
#define x 100
#define y 10
#define z 5

int main()
{
  int matriz[x][y][z];
  for (int i = 0; i < x; i++)
  {
    for (int l = 0; l < y; l++)
    {
      for (int j = 0; j < z; j++)
      {
        matriz[i][l][j] = 7;
        printf("%d\n", matriz[i][l][j]);
      }
    }
  }
  return 0;
}