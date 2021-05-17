#include <stdio.h>
//calculo de dias

int main()
{
	float mediavida;
	float idade;
	float diaspmorte;
	
	printf("digite a sua idade: ");
	scanf("%f", &idade);
	
	mediavida = 70 - idade;
	diaspmorte= mediavida*365;
	
	printf("com a idade digitada, em dias, teria em media de: %0.0f dias", diaspmorte);
	
	
return 0;
}
