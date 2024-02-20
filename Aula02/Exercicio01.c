#include <stdio.h>

int main()
{
  int num;
  printf("Este programa calcula o triplo do numero escrito pelo usuário\n\n");
  printf("Digite um numero: ");
  scanf("%d", &num);
  printf("%d multiplicado por 3 é %d\n", num, (num * 3));

  return 0;
}