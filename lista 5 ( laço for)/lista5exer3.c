//3. Receber 10 números e informar se cada um deles é negativo, positivo ou nulo.

#include<stdio.h>

int main()
{
int num, entrada, positivo, negativo, nulo;

		for( entrada = 1; entrada <10 ; entrada++ )
	 {
  printf ("\ndigite um numero: ");
  scanf ("%i", &num);
		

		if(num > 0)
		{
			printf("o numero %i eh positivo\n", num);
		}
		
				else if(num <0)
				{
						printf("o numero %i eh negativo\n", num);
				}
				
		else
		{
			printf("o numero %i eh neutro\n", num);
		}}

return 0;}

