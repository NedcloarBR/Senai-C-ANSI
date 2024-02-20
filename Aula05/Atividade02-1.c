#include <stdio.h>

int main()
{
  char l1, l2, l3, l4;
  printf("Programa para apresentar 4 letras\n\n");
  printf("Digite uma letra: ");
  fflush(stdin);
  scanf("%c", &l1);
  printf("\nDigite outra letra letra: ");
  fflush(stdin);
  scanf("%c", &l2);
  printf("\nDigite outra letra letra: ");
  fflush(stdin);
  scanf("%c", &l3);
  printf("\nDigite outra letra letra: ");
  fflush(stdin);
  scanf("%c", &l4);

  printf("Você digitou: %c, %c, %c, %c", l1, l2, l3, l4);
  return 0;
}