#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define A 261 // DO
#define S 293 // RE
#define D 330 // MI
#define F 349 // FA
#define G 392 // SOL
#define H 440 // LA
#define J 493 // SI

int main()
{
  char tecla;
  printf("Desligue o CAPS LOCK para o programa funcionar!\n");
  printf("Lista de Teclas: \nDO = A\nRE = S\nMI = D\nFA = F\nSOL = G\nLA = H\nSI = J\n\n");
  while (true)
  {
    tecla = getch();

    switch (tecla)
    {
    case 'a':
      Beep(A, 1000);
      break;
    case 's':
      Beep(S, 1000);
      break;
    case 'd':
      Beep(D, 1000);
      break;
    case 'f':
      Beep(F, 1000);
      break;
    case 'g':
      Beep(G, 1000);
      break;
    case 'h':
      Beep(H, 1000);
      break;
    case 'j':
      Beep(J, 1000);
      break;
    }
  }

  return 0;
}