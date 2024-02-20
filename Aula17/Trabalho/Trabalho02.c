#include <stdio.h>

int main()
{
  int password, saldos[3], i;
  char nomes[3][20];
  bool status = false;
  FILE *user;

  printf("Caixa Eletrônico\n\n");
  printf("Digite sua Senha: ");
  scanf("%d", &password);

  user = fopen("../users.txt", "r");
  if (user == NULL)
  {
    printf("Erro ao abrir o arquivo.\n");
    return 1;
  }

  for (i = 0; i < 3; i++)
  {
    fscanf(user, "%s"
                 "%d",
           nomes[i], &saldos[i]);
    printf(nomes[i]);
  }

  do
  {
    switch (password)
    {
    case 123:
      status = true;
      break;

    default:
      break;
    }
  } while (!status);

  fclose(user);
  return 0;
}
