
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
  float raio, area;
  printf("Este programa calcula a área de um circulo\n\n");
  printf("Digite o raio do circulo: ");
  scanf("%f", &raio);
  area = pow(raio, 2) * M_PI;
  printf("A área do circulo é: %f\n", area);
  return 0;
}