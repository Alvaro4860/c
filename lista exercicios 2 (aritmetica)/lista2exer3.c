#include <stdio.h>
//media materia algoritmos

int main()
{
	float notappum;
	float notappdois;
	float notaptum;
	float notaptdois;
	float mediapp;
	float mediapt;
	float mediafinal;
	
	printf("digite a nota da primeira prova pratica: ");
	scanf("%f", &notappum);
	printf("digite a nota da segunda prova pratica: ");
	scanf("%f", &notappdois);
	
	mediapp = (notappum + notappdois)/2*0.4;
	printf("a media das provas praticas eh: %0.1f \n", mediapp);
	
	printf("\n digite a nota da primeira prova teorica: ");
	scanf("%f", &notaptum);
	printf("digite a nota da segunfa prova teorica: ");
	scanf("%f", &notaptdois);
	
	mediapt = (notaptum + notaptdois)/2*0.6;
	printf("a media das provas teoricas eh: %0.1f \n", mediapt);
	
	mediafinal = mediapt + mediapp;
 printf("\n a media final das provas eh: %0.1f \n", mediafinal);
	
	return 0;
}
