//3. Receber 10 n�meros e informar se cada um deles � negativo, positivo ou nulo.

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

