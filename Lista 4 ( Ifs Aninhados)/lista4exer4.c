//4. Receber tr�s n�meros e dizer se existe algum n�mero repetido entre eles.
// Em caso afirmativo, mostre qual o n�mero esta repetido.

#include<stdio.h>

int main()
{
int num1, num2, num3;

printf("digite o primeiro numero: ");
scanf ("%d", &num1);
printf("digite o valor da segunda extremidade: ");
scanf ("%d", &num2);
printf("digite o numero para ser verificado :" );
scanf ("%d", &num3);

if(num1 != num2 && num1 != num3 && num2 != num3)
	 {
		printf("\nos tres valores sao diferentes %d, %d e %d", num1, num2, num3);
 	}
	   else if(num1 == num2 || num1 == num3)
    	{
			  printf("\nO numero %d foi repetido.", num1);
		   }
		else
		{
			printf("\nO numero %d foi repetido.", num2);
		}

return 0;}

