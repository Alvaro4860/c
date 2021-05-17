//1. Receber 10 números e mostrar o dobro de cada um deles.

#include<stdio.h>

int main()
{
	
int num, entrada;

  for ( entrada = 1;entrada <= 10 ;entrada++ )
	  {
	  printf ("\ndigite um numero: ");
   scanf ("%d", &num);

			num = num*2;
			printf ("o dobro eh: %d \n", num);
   }

return 0;
}
