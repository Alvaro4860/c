//Receber numerador e denominador. Calcular e mostrar o resultado da divis�o,
// desde que poss�vel (denominador diferente de zero).
//Se n�o for poss�vel dividir, apenas escreva �n�o existe divis�o por zero�.
#include <stdio.h>

int main()
{
		float denominador, numerador, result;
		
printf (" digite o numerador: ");
scanf ("%f", &numerador);
printf (" digite o denominador: ");
scanf ("%f", &denominador);
result=numerador/denominador;


if (denominador == 0){
   printf ("\n nao existe divisao por zero");}
   else {
   printf ("\n %.2f", result);}

return 0;}

