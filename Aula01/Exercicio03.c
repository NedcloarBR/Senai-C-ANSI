#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("Este programa converte a temperatura de Celsius digitada pelo usuário para Fahrenheit\n");
  int c, f;
  printf("Digite uma temperatura em Graus Celsius: ");
  scanf("%d", &c);
  f = (c * 9 / 5) + 32;
  printf("%d°C convertido fica %d°F", c, f);
  printf("\n");
  system("pause");
  return 0;
}