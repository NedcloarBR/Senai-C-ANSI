#include <stdio.h>
#include <stdlib.h>

int main()
{
  char r;
  do
  {
    printf("\nOlá Tudo bem...");
    printf("\n\nDeseja Continuar? [s/n] ");
    fflush(stdin);
    scanf("%c", &r);
  } while (r == 's' || r = 'S');

  return 0;
}