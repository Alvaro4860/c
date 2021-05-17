//2.Receber 10 números, ao final, informar quantos são positivos e quantos são negativos.

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
			 printf("\na quantidade de número negativo é: %i", negativo );
	   printf("\na qunatidade de número positivo é: %i", positivo );

return 0;}
