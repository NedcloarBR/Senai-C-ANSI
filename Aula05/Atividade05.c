#include <stdio.h>
#include <ncurses.h>
#define CorrectPassword 1234

int main()
{

  int password;
  printf("Este programa verifica a senha escrita pelo usuário\n\n");
  printf("Digite a senha: ");
  scanf("%d", &password);
  if (password == CorrectPassword)
  {
    printf("Senha correta!\n");
  }
  else
  {
    printf("Senha incorreta...\n");
  }
  return 0;
}