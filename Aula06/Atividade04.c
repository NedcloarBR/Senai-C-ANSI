#include <stdio.h>

int main()
{
  int i = 0;
  char r1, r2, r3, r4, r5;
  printf("Este programa testa seus conhecimentos gerais e lhe da uma nota ao fim\n\n");
  printf("1 - Qual dos carros foi fabricado em parceria com a Caloi?\na) x 1/9\nb) Lunax\nc) Play Mobil\nd) Fox\ne) Dardo\n");
  fflush(stdin);
  scanf("%c", &r1);
  if (r1 == "e" || r1 == "E")
    i++;

  printf("\n\n2 - Qual dos itens abaixo não é uma rede social\na) Skype\nb) Facebook\nc) GrandTour\nd) Discord\ne) X\n");
  fflush(stdin);
  scanf("%c", &r2);
  if (r2 == "c" || r2 == "C")
    i++;

  printf("\n\n3 - Qual dos carros abaixo não foi fabricado pela GM - Chevrolet?\na) Astra\nb) Celta\nc) Corsa \nd) Fox\ne) Classic\n");
  fflush(stdin);
  scanf("%c", &r3);
  if (r3 == "d" || r3 == "D")
    i++;

  printf("\n\n4 - Qual dos times brasileiros não tem mundial?\na) Palmeiras \nb) Flamengo\nc) Cruzeiro\nd) Corinthians\ne) Internacional\n");
  fflush(stdin);
  scanf("%c", &r4);
  if (r4 == "a" || r4 == "A")
    i++;

  printf("\n\n5 - Qual o jogo mais jogado da atualidade?\na) Valorant \nb) Minecraft\nc) Counter Strike: Global Ofencive (CS:GO)\nd) Fortnite\ne) League of Legends\n");
  fflush(stdin);
  scanf("%c", &r5);
  if (r5 == "b" || r5 == "B")
    i++;

  printf("\n\nsVocê acertou %d/5 perguntas!", i);
  return 0;
}