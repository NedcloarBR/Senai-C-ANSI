#include <stdio.h>

int main()
{
  float b, h;
  printf("Este programa calcula a área de um retângulo\n\n");
  printf("Digite a base do retângulo: ");
  scanf("%f", &b);
  printf("Digite a altura do retângulo: ");
  scanf("%f", &h);

  printf("A área do retângulo é: %.2fm²\n", (b * h));

  return 0;
}