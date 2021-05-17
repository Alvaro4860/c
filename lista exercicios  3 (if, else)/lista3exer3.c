//Receber numerador e denominador. Calcular e mostrar o resultado da divisão,
// desde que possível (denominador diferente de zero).
//Se não for possível dividir, apenas escreva “não existe divisão por zero”.
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

