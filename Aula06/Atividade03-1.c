#include <stdio.h>

int main()
{
  float Type, Re, R1, R2;
  printf("Este programa calcula a resistência equivalente para 2 resistências quaisquer\n\n");

  for (int i = 0; i < 6; i++)
  {
    printf("Você quer calcular uma resistência de Série (1) ou Paralela (2) - Digite o número da opção desejada: ");
    scanf("%f", &Type);
    if (Type != 1 && Type != 2)
    {
      printf("Opção invalida inserida\n\n");
    }
    else if (Type == 1 || Type == 2)
    {
      printf("\n\n");
      break;
    }
    if (i == 5)
    {
      printf("Número máximo de tentativas alcançado.\nEncerrando processo...\n\n");
      return 0;
    }
  }

  printf("Digite o 1° valor da resistência: ");
  scanf("%f", &R1);

  printf("Digite o 2° valor da resistência: ");
  scanf("%f", &R2);

  if (Type == 1)
    Re = R1 + R2;

  else if (Type == 2)
    Re = (R1 * R2) / (R1 + R2);

  printf("A resistência equivalente é: %.2f\n\n", Re);

  return 0;
}
