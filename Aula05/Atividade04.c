#include <stdio.h>
#define CURRENT_YEAR 2023
#define _AGE 18

int main()
{
  int ano, idade;
  printf("Este programa verifica se o usuário tem é maior de idade ou não a partir do ano em que nasceu\n\n");
  printf("Digite o ano em que você nasceu: ");
  scanf("%d", &ano);
  idade = CURRENT_YEAR - ano;
  if (idade >= _AGE)
  {
    printf("Você é maior de idade! Você tem %d anos de idade\n", idade);
  }
  else
  {
    printf("Você é não maior de idade! Você tem %d anos de idade\n", idade);
  }

  return 0;
}