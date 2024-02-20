#include <stdio.h>

int main()
{
  int year, diff, days;
  const int DAYS_IN_THE_YEAR = 364;
  const int CURRENT_YEAR = 2023;
  printf("Este programa calcula sua idade o os dias vividos a partir do ano de seu nascimento\n\n");
  printf("Qual o ano de seu nascimento: ");
  scanf("%d", &year);
  diff = CURRENT_YEAR - year;
  days = diff * DAYS_IN_THE_YEAR;
  printf("Você tem %d anos de idade!\n", diff);
  printf("Você está vivo a %d dias!\n", days);

  if (year < 1940)
  {
    printf("Tu é bem velho em\n");
  }
  return 0;
}