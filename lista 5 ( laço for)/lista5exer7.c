//7. Para 30 alunos da turma de Algoritmos e Programa��o, receber a m�dia de teoria
//e a m�dia de laborat�rio, calcular a m�dia final
//(final = teoria * 0.6 + laborat�rio * 0.4) e informar

#include<stdio.h>

int main()
{
	int mediateo, medialab, mediafin, i;
	
	for( i = 1; i <= 30 ; i++ )
	{
		printf("\n digite a media teorica ");
	 scanf("%i", &mediateo);

		printf("digite a media de laboratorio ");
	 scanf("%i", &medialab);
	 
	 mediafin = (mediateo*0.6) + (medialab*0.4);
	 printf ("a media final eh de: %i \n", mediafin);
 }

	 
return 0;}
