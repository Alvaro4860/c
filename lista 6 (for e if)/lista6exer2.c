//2.Receber 10 n�meros, ao final, informar quantos s�o positivos e quantos s�o negativos.

#include<stdio.h>
#include<locale.h>

int main()
{
 setlocale (LC_ALL, "portuguese_Brazil");

	int num, negativo, i, positivo;

	for( i = 0 ; i < 10 ; i++ )
	{
		printf("digite os numeros a serem verificados: ");
		scanf("%i", &num);
		
   if( num<0 )
			{
				negativo++;
 		}
 		else
 		{
 			positivo++;
			}
	}
			 printf("\na quantidade de n�mero negativo �: %i", negativo );
	   printf("\na qunatidade de n�mero positivo �: %i", positivo );

return 0;}
