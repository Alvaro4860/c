#include <stdio.h>
//conversão de metros em centimetros

int main()
{
	int metro;
int cm;

printf("DIGITE O comprimento em metros ");
scanf("%i", &metro);

cm = metro*100;
printf("o valor em centimetro eh: %icm", cm);

return 0;
}
