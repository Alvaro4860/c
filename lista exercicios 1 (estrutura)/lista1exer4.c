#include <stdio.h>
//converão de Fahrenheit em Celsius

int main()
{
int grausC;
int grausF;
int convF;

printf("DIGITE a temperatura em Fahrenheit ");
scanf("%i", &grausF);

convF = grausF - 32;
grausC = convF /1.8;

printf("a temperatuda de Fahrenheit convertida em Celsius eh: %iC", grausC);

return 0;
}
