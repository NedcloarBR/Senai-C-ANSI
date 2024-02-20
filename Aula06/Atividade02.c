#include <stdio.h>

int main()
{
  int num, module;
  printf("Este programa verifica se o número inserido pelo usuário é par ou impar e se ele é positivo ou negativo\n\n");
  printf("Insira um número: ");
  scanf("%d", &num);
  module = num % 2;
  if (module == 0)
  {
    printf("O número %d é par ", num);
  }
  else
  {
    printf("O número %d é impar ", num);
  }
  if (num > 0)
  {
    printf("e positivo\n");
  }
  else
  {
    printf("e negativo\n");
  }
  return 0;
}