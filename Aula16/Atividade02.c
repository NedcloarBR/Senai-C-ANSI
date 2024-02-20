#include <stdio.h>
#include "headers/functions.h"

int main()
{
  float R1, R2, Op, Re;
  introPrint("Calculo de Resistores em Serie ou Paralelo");
  printf("Qual tipo de Resistor (1) - Serie, (2) - Paralelo: ");
  scanf("%f", &Op);

  printf("Digite o valor do Resistor 1");
  scanf("%f", &R1);

  printf("Digite o valor do Resistor 2");
  scanf("%f", &R2);

  if (Op == 1)
  {
    Re = serie(R1, R2);
  }
  else if (Op == 2)
  {
    Re = paralelo(R1, R2);
  }

  printf("Resistor: %f", Re);

  assinatura();
  return 0;
}