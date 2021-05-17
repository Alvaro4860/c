//2. Receber um número e mostrar sua tabuada do 1 ao 10.

#include<stdio.h>

int main()
{
	
int num, contador;


printf ("\ndigite um numero: ");
scanf ("%d", &num);

		for ( contador=0; contador <= 10 ; contador++ )
	  {
			printf ("\n %d x %d = %d", num, contador, num*contador);
   }

	return 0;
}
