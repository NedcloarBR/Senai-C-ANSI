#include <stdio.h>

int main()
{
  float sal, salTot, tax, liquid;

  printf("Este programa calcula o Imposto de Renda considerando uma tributação de 6/100");
  printf("\n\nDigite o seu Salario mensal: ");
  scanf("%f", &sal);
  salTot = sal * 12;
  tax = salTot * (6.0 / 100);
  liquid = sal * 12 - tax;
  printf("Salario anual bruto: %.2f\n", salTot);
  printf("Salario anual liquido: %.2f\n", liquid);
  printf("Imposto Devido ao governo: %.2f\n", tax);
  return 0;
}