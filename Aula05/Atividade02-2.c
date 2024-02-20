// SÓ FUNCIONA NO WINDOWS POIS A BIBLIOTECA CONIO NÃO É ANSI

#include <stdio.h>
#include <conio.h>

int main()
{
  char l1, l2, l3, l4;
  printf("Programa para apresentar 4 letras\n\n");
  printf("Digite uma letra e de enter após digite outra até o ciclo chegar ao fim: ");
  l1 = getch();
  l2 = getch();
  l3 = getch();
  l4 = getch();

  printf("Você digitou: %c, %c, %c, %c", l1, l2, l3, l4);
  return 0;
}