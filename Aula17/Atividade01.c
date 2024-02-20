#include <stdio.h>
float norma(float n);

int main()
{
  float temp, press, vol;
  FILE *arq;
  arq = fopen("TPV.txt", "r");
  if (arq == NULL)
  {
    printf("Impossível abrir o arquivo");
  }
  else
  {
    fscanf(arq, "%f"
                "%f"
                "%f",
           &temp, &press, &vol);
    printf("Temperatura: %f\nPressão: %f\nVolume: %f", norma(temp), norma(press), norma(vol));
    if (norma(temp) > 80)
    {
      printf("Temperatura acima do limite");
      return 1;
    }
  }
  return 0;
}

float norma(float n)
{
  float x;
  x = n * 100. / 1000.;
  return x;
}