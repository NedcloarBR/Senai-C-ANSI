#include <stdio.h>
#include <math.h>

int main()
{
  float a, b, c, DELTA, R1, R2;
  printf("Este programa calcula a formula de baskara de acordo com os valores inseridos pelo usuário.\n\n");
  printf("Formula: DELTA = b²-4.a.c\nX¹ = -b+RAIZ QUADRADA(DELTA)/2.a\nX² = -b-RAIZ QUADRADA(DELTA)/2.a\n");
  printf("Digite o valor de `a`: ");
  scanf("%f", &a);
  printf("\nDigite o valor de `b`: ");
  scanf("%f", &b);
  printf("\nDigite o valor de `c`: ");
  scanf("%f", &c);

  DELTA = pow(b, 2) - 4 * a * c;
  if (DELTA < 0)
  {
    printf("O resultado do Delta é invalido: %.2f\nNão é possível calcular uma Raiz de um número negativo", DELTA);
    return 0;
  }

  R1 = (-b + sqrt(DELTA)) / (2 * a);
  R2 = (-b - sqrt(DELTA)) / (2 * a);

  printf("Resultados: \nDelta: %.2f\nX¹: %.2f\nX²: %.2f", DELTA, R1, R2);
  return 0;
}