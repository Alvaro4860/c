#include <stdio.h>
//calculo de área de triangulo

int main()
{
float base;
float altura;
float area;

printf("DIGITE O valor da base do triangulo ");
scanf("%f", &base);

printf("DIGITE O valor da altura do triangulo");
scanf("%f", &altura);

area = base*altura;
printf("a area do triangulo  eh: %f", area);

return 0;
}
