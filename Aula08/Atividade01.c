#include <stdio.h>
#include <math.h>

int main()
{
  float n1, n2, media;
  printf("Este programa calcula a média de 2 notas inseridas pelo usuário e as arredonda\n\n");
  printf("Digite a 1ª nota: ");
  scanf("%f", &n1);
  printf("Digite a 2ª nota: ");
  scanf("%f", &n2);
  media = round((n1 + n2) / 2);

  printf("Média: %.2f\n0", media);
  return 0;
}