#include <stdio.h>
#include <stdlib.h>

#define eneas 1
#define lula 13
#define bolsonaro 17
#define tiririca 40
#define sergio 51

char confirmVoto();
void clearScreen();
void waitForEnter();

int main()
{
  int votos[6] = {0}, votoInserido, eleitores = 2;
  char confirm;

  for (int i = 0; i < eleitores + 1; i++)
  {
    printf("\nPressione Enter para iniciar seu voto...");
    waitForEnter();
    clearScreen();

    printf("\n\n\t Urna Eletrônica Eleitoral\n\n");
    printf("\tLista de candidatos\n");
    printf("\tEnéas: 1\n\tLuladrão: 13\n\tBolsonaro: 17\n\tTiririca: 40\n\tSérgio: 51\n\n");
    printf("\nInsira seu voto e pressione Enter para confirmar\nVoto: ");
    scanf("%d", &votoInserido);
    switch (votoInserido)
    {
    case eneas:
      printf("\n\nVoto Inserido\n\nCandidato: Enéas Carneiro\nNúmero de voto: %d\nPartido: Partido da Reedificação da Ordem Nacional", eneas);
      confirm = confirmVoto();
      if (confirm == '0')
      {
        votos[0]++;
        printf("\nVocê votou em Enéas");
      }
      else
      {
        votos[5]++;
        printf("\nVoto Cancelado, Nulo ou Branco");
      }
      break;

    case lula:
      printf("\n\nVoto Inserido\n\nCandidato: Luis Inácio Luladrão da Silva\nNúmero de voto: %d\nPartido: Partido dos \"Trabalhadores\"", lula);
      confirm = confirmVoto();
      if (confirm == '0')
      {
        votos[1]++;
        printf("\nVocê votou em Luladrão");
      }
      else
      {
        votos[5]++;
        printf("\nVoto Cancelado, Nulo ou Branco");
      }
      break;

    case bolsonaro:
      printf("\n\nVoto Inserido\n\nCandidato: Jair Messias Bolsonaro\nNúmero de voto: %d\nPartido: Partido Liberal", bolsonaro);
      confirm = confirmVoto();
      if (confirm == '0')
      {
        votos[2]++;
        printf("\nVocê votou em Bolsonaro");
      }
      else
      {
        votos[5]++;
        printf("\nVoto Cancelado, Nulo ou Branco");
      }
      break;

    case tiririca:
      printf("\n\nVoto Inserido\n\nCandidato: Tiririca\nNúmero de voto: %d\nPartido: Sei lá", tiririca);
      confirm = confirmVoto();
      if (confirm == '0')
      {
        votos[3]++;
        printf("\nVocê votou em Tiririca");
      }
      else
      {
        votos[5]++;
        printf("\nVoto Cancelado, Nulo ou Branco");
      }
      break;
    case sergio:
      printf("\n\nVoto Inserido\n\nCandidato: Sérgio\nNúmero de voto: %d\nPartido: Senai", sergio);
      confirm = confirmVoto();
      if (confirm == '0')
      {
        votos[4]++;
        printf("\nVocê votou em Sérgio");
      }
      else
      {
        votos[5]++;
        printf("\nVoto Cancelado, Nulo ou Branco");
      }
      break;

    default:
      printf("Voto em Branco/Nulo pressione Enter para confirmar.");
      fflush(stdout);
      confirm = confirmVoto();
      if (confirm == '0' || confirm == '1')
      {
        votos[5]++;
        printf("\nVoto Cancelado, Nulo ou Branco");
      }
      break;
    }

    printf("\nPressione Enter para continuar...");
    waitForEnter();
    clearScreen();
  }
  for (int i = 0; i < 7; i++)
  {
    switch (i)
    {
    case 0:
      printf("Enéas: %d votos %d%", votos[i], votos[i] / eleitores * 100);
      break;
    case 1:
      printf("Luladrão: %d votos %d%", votos[i], votos[i] / eleitores * 100);
      break;
    case 2:
      printf("Bolsonaro: %d votos, %d%", votos[i], votos[i] / eleitores * 100);
      break;
    case 3:
      printf("Tiririca: %d votos %d%", votos[i], votos[i] / eleitores * 100);
      break;
    case 4:
      printf("Sérgio: %d votos %d%", votos[i], votos[i] / eleitores * 100);
      break;
    case 5:
      printf("Brancos/Nulos: %d votos, %d%", votos[i], votos[i] / eleitores * 100);
      break;
    }
  }
  return 0;
}

char confirmVoto()
{
  char confirm;
  printf("\nConfirma seu Voto? (s/n)");
  scanf(" %c", &confirm);
  if (confirm == 's' || confirm == 'S')
  {
    return '0';
  }
  else
  {
    return '1';
  }
}

void clearScreen()
{
  printf("\033[H\033[J");
}

void waitForEnter()
{
  while (getchar() != '\n')
    ;
}