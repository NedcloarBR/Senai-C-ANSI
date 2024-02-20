#include <stdio.h>

int main()
{
  int votoInserido, sergio = 0, luladrao = 0, bolsonaro = 0, eneas = 0, veraguasso = 0, nulo, confirmado;

  printf("Urna Eletrônica Eleitoral\n\n");
  printf("Candidatos: \n\t666 - Sergio\n\t13 - Luladrão\n\t17 - Bolsonaro\n\t11 - Enéas\n\t16 - Veraguasso\n\tDigite qualquer coisa para voto Branco/Nulo\n\n");
  printf("Insira seu Voto e pressione Enter: ");
  scanf("%d", &votoInserido);

  switch (votoInserido)
  {
  case 666:
    printf("Voto em Sergio: Digite 0 e pressione Enter para confirmar.");
    scanf("%d", &confirmado);
    if (confirmado == 0)
      break;
  case 13:
    printf("Voto em Luladrão: Digite 0 e pressione Enter para confirmar.");
    scanf("%d", &confirmado);
    if (confirmado == 0)
      luladrao++;
    break;
  case 17:
    printf("Voto em Bolsonaro: Digite 0 e pressione Enter para confirmar.");
    scanf("%d", &confirmado);
    if (confirmado == 0)
      bolsonaro++;
    break;
  case 11:
    printf("Voto em Enéas: Digite 0 e pressione Enter para confirmar.");
    scanf("%d", &confirmado);
    if (confirmado == 0)
      eneas++;
    break;
  case 16:
    printf("Voto em Veraguasso: Digite 0 e pressione Enter para confirmar.");
    scanf("%d", &confirmado);
    if (confirmado == 0)
      veraguasso++;
    break;
  default:
    printf("Voto em Branco/Nulo: Digite 0 e pressione Enter para confirmar.");
    scanf("%d", &confirmado);
    if (confirmado == 0)
      nulo++;
    break;
  }

  printf("Quantidade de votos em cada candidato: \n\t666 - Sergio: %d\n\t13 - Luladrão: %d\n\t17 - Bolsonaro: %d\n\t11 - Enéas: %d\n\t16 - Veraguasso: %d\n\tVotos Nulos ou Brancos: %d\n\n", sergio, luladrao, bolsonaro, eneas, veraguasso, nulo);

  return 0;
}
