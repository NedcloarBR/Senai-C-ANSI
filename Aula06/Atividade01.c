#include <stdio.h>

int main()
{
  int num, module;
  printf("Este programa verifica se o número inserido pelo usuário é par ou impar\n\n");
  printf("Insira um número: ");
  scanf("%d", &num);
  module = num % 2;
  if (module == 0)
  {
    printf("O número %d é par\n", num);
  }
  else
  {
    printf("O número %d é impar\n", num);
  }
  return 0;
}