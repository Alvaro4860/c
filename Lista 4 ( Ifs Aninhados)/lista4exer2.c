//Receber um intervalo (dois valores) e em seguida um n�mero.
//Informar se o n�mero est� dentro, fora ou nas extremidades do intervalo.
//Por exemplo, em um intervalo de 1 a 3, 0 est� fora, 2 est� dentro
// e 1 est� em uma extremidade do intervalo.

#include<stdio.h>

int main()
{
float extremidade1, extremidade2, numero;

printf("digite o valor da primeira extremidade: ");
scanf ("%f", &extremidade1);
printf("digite o valor da segunda extremidade: ");
scanf ("%f", &extremidade2);
printf("digite o numero para ser verificado :" );
scanf ("%f", &numero);

if (numero > extremidade1 && numero < extremidade2)
   {
   printf ("\n %.2f esta entre as extremidades %.0f e %.0f :", numero, extremidade1, extremidade2);
			}

		   else if (numero > extremidade2 && numero < extremidade1)
			  {
     printf ("\n %.2f esta entre as extremidades %.0f e %.0f :", numero, extremidade2, extremidade1);
			  }

			  else if(numero == extremidade1 || numero == extremidade2)
			  {
			  printf ("\n %.2f esta na extremidade %.0f ou %.0f :", numero, extremidade2, extremidade1);
			  }
			
		 else
			{
			printf ("\n %.2f nao esta entre as extremidades %.0f e %.0f :", numero, extremidade1, extremidade2);
			}

return 0;}

