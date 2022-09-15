/*Programa para calculadora*/
/*Por: João Sousa e João Campelo*/
#include <stdio.h>
int main()
{
  int N1;
  int N2;
  int opcao;
  int R;
  while(opcao!=0) 
    {
      printf("Diga um número: \n");
      scanf("%d",&N1);
      printf("Diga outro número: \n");
      scanf("%d",&N2);
      printf("Escolha uma das seguintes opções:\n");
      printf("1 se pretende somar os dois valores\n");
      printf("2 se pretende subtrair os dois valores\n");
      printf("3 se pretende multiplicar os dois valores\n");
      printf("0 se pretende sair\n");
      scanf("%d",&opcao);
      if(opcao==1)
	{
	  R=N1+N2;
	  printf("%d+%d=%d\n", N1,N2,R);
	}
      else if(opcao==2)
	{
	  R=N1-N2;
	  printf("%d-%d=%d\n", N1,N2,R);
	}
      else if(opcao==3)
	{
	  R=N1*N2;
	  printf("%d*%d=%d\n", N1,N2,R);
	}
      else if(opcao==0)
	{
	  printf("Adeus!\n");
	}
      else
	{
	  printf("Opção inválida\n");
	}
    }
  return(0);
}
