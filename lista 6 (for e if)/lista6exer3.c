//3. Solicitar quantos n�meros o usu�rio deseja informar, receber cada um deles
// e mostrar a m�dia aritm�tica dos valores positivos no final.

#include<stdio.h>
#include<locale.h>

int main()
{
 setlocale (LC_ALL, "portuguese_Brazil");

 int num, soma, media, i;
 
 printf("informe a quantidade de numeros ser� digitado: ");
 scanf("%i", &num);
 
	for ( i=1 ; i<=num ; i++ )
  {
 	printf("informe o %i� numero: ", i);
  scanf("%i", &soma);
  	
			 if( soma >= 0 )
				{
					media = soma + media;
				}
	 }
	 
	media = media / num;
	printf("a m�dia aritm�tica dos numeros digitados �: %i", media);
	
	return 0;}
