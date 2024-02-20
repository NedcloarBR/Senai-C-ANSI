#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "");

  int n1, n2, med;
  printf("Este programa calcula e exibe a média entre 2 números definidos pelo usuário\n");
  printf("Digite o 1º número: ");
  scanf("%d", &n1);
  printf("Digite o 2º número: ");
  scanf("%d", &n2);
  med = (n1 + n2) / 2;
  printf("Média: %d", med);
  printf("\n");
  system("pause");
  return 0;
}
