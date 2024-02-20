#include <stdio.h>
#include "headers/functions.h"

int main(void)
{
  introPrint("Calculo de Area de um Retângulo\n");
  limpar();
  printf("A area é %.2f: \n", AreaSqrRet());
  return 0;
}
