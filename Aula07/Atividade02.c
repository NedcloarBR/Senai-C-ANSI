#include <stdio.h>

int main()
{
  float Altura, Sexo, Peso;
  printf("Este programa calcula o peso ideal de um individuo de acordo com seu sexo.\n\n");
  printf("Qual seu sexo?\nDigite 1 para Homem\nDigite 2 para Mulher\nResposta: ");
  scanf("%f", &Sexo);
  printf("\nQual sua altura? ");
  scanf("%f", &Altura);

  if (Sexo == 1)
  {
    Peso = 72.7 * Altura - 58;
  }
  else if (Sexo == 2)
  {
    Peso = 62.1 * Altura - 44.7;
  }

  printf("Peso ideal: %f", Peso);
  return 0;
}