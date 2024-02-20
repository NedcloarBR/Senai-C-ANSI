#include <stdio.h>

int main()
{
  int d, m, a, x, y, k, aa, bb, sem;
  printf("Este programa calcula qual dia da semana era em uma data especificada pelo usuário\n\n");
  printf("Digite o Dia do mês: ");
  scanf("%d", &d);
  printf("\nDigite o Mês: ");
  scanf("%d", &m);
  printf("\nDigite o Ano: ");
  scanf("%d", &a);

  x = 3 * (m - 1) - 1;
  y = x + a + d;

  if (m < 3)
    k = a - 1;
  else
  {
    k = a;
    x = .4 * m + 2.3;
    y = y - x;
  }

  aa = k / 4;
  bb = (k / 100 + 1) * .75;
  x = y + aa - bb;
  sem = x % 7;
  sem++;

  switch (sem)
  {
  case 1:
    printf("\n\nDomingo\n");
    break;
  case 2:
    printf("\n\nSegunda-Feira\n");
    break;
  case 3:
    printf("\n\nTerça-Feira\n");
    break;
  case 4:
    printf("\n\nQuarta-Feira\n");
    break;
  case 5:
    printf("\n\nQuinta-Feira\n");
    break;
  case 6:
    printf("\n\nSexta-Feira\n");
    break;
  case 7:
    printf("\n\nSábado\n");
    break;
  }

  return 0;
}