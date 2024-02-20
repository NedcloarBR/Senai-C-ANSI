// SÓ FUNCIONA NO WINDOWS POIS A BIBLIOTECA CONIO NÃO É ANSI

#include <stdio.h>
#include <conio.h>

int main()
{
  char l1, l2, l3, l4;
  printf("Programa para apresentar 4 letras\n\n");
  printf("Digite 4 letras: ");
  l1 = getche();
  l2 = getche();
  l3 = getche();
  l4 = getche();

  printf("Você digitou: %c, %c, %c, %c", l1, l2, l3, l4);
  return 0;
}