#include <stdio.h>

/*
 * É considerado falso na linguagem C:
 * 0, false
 */

/*
 * É considerado verdadeiro na linguagem C:
 * 1, true
 */

int main()
{
  float num1;
  printf("Testes de If Else\n\n");
  printf("Digite um número: ");
  scanf("%f", &num1);

  if (num1 >= 10 && num1 <= 20)
  {
    printf("Você digitou algum número entre 10 e 20\n");
  }
  else
  {
    printf("Você digitou algum número fora de 10 e 20\n");
  }

  /*
   * a = 1;
   * b = 5;
   * if(a<2) true
   * if(a>b) false
   * if(a<b) true
   * if(a<=b) false
   * if(a<1) false
   * if(b>5) false
   * if(a<5) true
   * if(a<=1) true
   * if(a==1) true
   * if(a>b) false
   * if(a<b && a!=0) true
   * if(a<1 || b>5) false
   * if(!b>5) true
   * if(!(5==5)) false
   * if((a<b || a!=1) && b(b<=5 && b==5)) true
   * if(a+b) true
   * if(a) true
   * if(0) false
   * if("qualquer string") true
   */

  return 0;
}