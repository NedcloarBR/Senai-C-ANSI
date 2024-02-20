#include <stdio.h>
void travar(void);
void loop(void);

// Calcula a Area de um Quadrado ou Retângulo
float AreaSqrRet(void)
{
  float b, h;
  printf("Digite a base: ");
  scanf("%f", &b);
  printf("Digite a altura: ");
  scanf("%f", &h);
  return b * h;
}

// Cria uma apresentação sobre o programa
void introPrint(char *intro)
{
  int i;

  for (i = 0; i < 39; i++)
    printf("*");
  printf("\n\tPrograma em linguagem C\n");
  printf("%s\n", intro);
  for (i = 0; i < 39; i++)
    printf("*");
  printf("\n\n");
}

// Limpa a tela
void limpar(void)
{
  travar();
  for (int i = 0; i < 500; i++)
  {
    printf("\n");
  }
}

// Trava a tela
void travar(void)
{
  int a;
  scanf("%d", &a);
}

// Calcula um resistor de serie
float serie(float R1, float R2)
{
  return R1 + R2;
}

// Calcula um resistor paralelo
float paralelo(float R1, float R2)
{
  return R1 * R2 / (R1 + R2);
}

// Cria uma assinatura no código
void assinatura(void)
{
  int x;
  printf("\n\n\n");
  for (x = 0; x < 50; x++)
    printf("+");
  loop();
  printf("\n\n");
}

void loop(void)
{
  int x, i;
  printf("\n");
  for (x = 0; x < 3; x++)
  {
    if (x == 1)
    {
      printf("+ Programmed by NedcloarBR");
      for (i = 0; i <= 24; i++)
      {
        if (i == 14)
        {
          printf("+");
        }
        printf(" ");
      }
    }
    else
    {
      printf(" ");
    }
    printf("+\n");
  }
}