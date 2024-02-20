#include <stdio.h>

int main()
{
  printf("Este programa calcula o peso ideal de uma pessoa de acordo com sua altura\n");
  float h;
  printf("Coloque sua altura no seguinte formato: metros.centímetros ou seja se sua altura for 1 metro e 77 centímetros coloque 1.77\n");
  printf("Diga a sua altura: ");
  scanf("%f", &h);
  printf("Peso ideal: %.2f", ((72.7 * h) - 58));
  printf("\n");
  return 0;
}