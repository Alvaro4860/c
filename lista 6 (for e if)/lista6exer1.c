//1. Solicitar quantos n�meros o usu�rio deseja informar, receber cada um deles
//e mostrar a m�dia aritm�tica no final.

#include<stdio.h>

int main()
{
	int repeticao, num, i;
	float media, soma=0;
	
	printf("digite a quantidade de numeros deseja informar: ");
	scanf("%i", &repeticao);
	
	for( i = 0; i < repeticao ; i++ )
	{
		printf("\n digite o numero para ser calculada a media ");
	 scanf("%i", &num);
	 
	 soma = num + soma;
 }

	 media = soma / repeticao;
	 printf ("a media eh de: %.1f \n", media);

return 0;}
