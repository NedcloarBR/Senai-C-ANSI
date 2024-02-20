#include <stdio.h>

int main()
{
  int filhos[5], idade[5], sF = 0, sI = 0;
  float mF, mI;
  printf("Este programa calcula a média de filhos e a média de com qual idade o primeiro filho nasceu de 5 famílias\n\n");
  for (int i = 0, p = 1; i < 5, p < 6; i++, p++)
  {
    printf("Familia %d | Quantos filhos você possui? ", p);
    scanf("%d", &filhos[i]);
    printf("Familia %d | Qual era a sua idade quando seu primeiro filho nasceu? ", p);
    scanf("%d", &idade[i]);
    printf("\n");
  }
  for (int i = 0; i < 5; i++)
  {
    sF = sF + filhos[i];
    sI = sI + idade[i];
  }
  mF = sF / 5;
  mI = sI / 5;

  printf("\nMédia de filhos: %.2f\n", mF);
  printf("Média de idade da mãe quando o primeiro filho nasceu: %.2f\n", mI);

  return 0;
}