#include <stdio.h>
#include <stdlib.h>

int main()
{
  char r;
  r = 's';
  while (r == 's' || r == 'S')
  {
    fflush(stdin);
    printf("\nOlá Tudo bem...");
    printf("\n\nDeseja Continuar? [s/n] ");
    fflush(stdin);
    scanf("%c", &r);
  }

  return 0;
}