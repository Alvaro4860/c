//4. Receber 2 n�meros inteiros e exibir todos os n�meros inteiros existentes entre eles.

#include<stdio.h>

int main()
{
int num1, num2, intervalo;

printf ("\ndigite um numero: ");
scanf ("%i", &num1);
printf ("\ndigite um numero: ");
scanf ("%i", &num2);

  if (num1 > num2)
		{
		printf("os numero entre %i e %i sao: \n", num2, num1);
		
		for( intervalo = num2+1; intervalo < num1  ; intervalo++)
		{
			printf("%i \n", intervalo);
		}}

 	else
		{
 		printf("os numero entre %i e %i sao: \n", num1, num2);
		for( intervalo = num1+1; intervalo < num2  ; intervalo++)
		{
			printf("%i \n", intervalo);
		}}
		
return 0;}

