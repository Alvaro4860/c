//Receber um número e verificar se ele esta na faixa de 0 à 9.
//Se sim, mostre uma mensagem afirmativa, caso contrário
// mostre uma mensagem indicando que o número não se encontra na faixa.

#include<stdio.h>
int main()
{
float num;

printf ("informe um nomero: ");
scanf ("%f", &num);

if(num >=0 && num<=9){
   printf ("este numero encontra-se num intervalo entre 0 e 9 ");}
   else{
			printf ("esse numero nao esta no intevalo entre 0 e 9");}
   
return(0);}
