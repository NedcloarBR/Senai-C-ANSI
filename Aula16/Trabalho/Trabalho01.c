#include <stdio.h>
#include <windows.h>

int main()
{
  int freq, time, select;
  FILE *music;
  printf("Tocador de musicas\n\n");
  printf("Qual musica você quer ouvir? \n1- Parabéns\n2- Star Wars\nDigite a opção: ");
  scanf("%d", &select);
  if (select == 1)
  {
    printf("Você escolheu: Parabéns");
    music = fopen("musica1.txt", "r");
  }
  else
  {
    printf("Você escolheu: Star Wars");
    music = fopen("musica2.txt", "r");
  }
  if (music == NULL)
  {
    printf("Impossível abrir o arquivo");
  }

  for (int i = 0; i < 100; i++)
  {
    fscanf(music, "%d"
                  "%d",
           &freq[i], &time[i]);
    Beep(freq, time);
  }
  for (i)

    fclose(music);
  return 0;
}