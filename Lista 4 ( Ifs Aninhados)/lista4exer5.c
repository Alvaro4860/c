//5. Receber três números e mostrar qual é o maior deles.

#include<stdio.h>

int main()
{
float num1, num2, num3;

printf("digite o primeiro numero: ");
scanf ("%f", &num1);
printf("digite o segundo numero: ");
scanf ("%f", &num2);
printf("digite o terceiro numero :" );
scanf ("%f", &num3);


if (num1 > num2 && num1 > num3)
   {
   printf ("\no meior entre eles eh: %.2f", num1);
			}
		   else if (num2 > num1 && num2 > num3)
			  {
			  printf("\no meior entre eles eh: %.2f", num2);
     }
   else printf("\no meior entre eles eh: %.2f", num3);

return 0;}
