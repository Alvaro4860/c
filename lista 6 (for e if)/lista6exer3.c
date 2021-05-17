//3. Solicitar quantos números o usuário deseja informar, receber cada um deles
// e mostrar a média aritmética dos valores positivos no final.

#include<stdio.h>
#include<locale.h>

int main()
{
 setlocale (LC_ALL, "portuguese_Brazil");

 int num, soma, media, i;
 
 printf("informe a quantidade de numeros será digitado: ");
 scanf("%i", &num);
 
	for ( i=1 ; i<=num ; i++ )
  {
 	printf("informe o %iº numero: ", i);
  scanf("%i", &soma);
  	
			 if( soma >= 0 )
				{
					media = soma + media;
				}
	 }
	 
	media = media / num;
	printf("a média aritmética dos numeros digitados é: %i", media);
	
	return 0;}
