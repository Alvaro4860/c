//Você assina um plano de 50 minutos no celular que custa R$ 50.00 por mês
//independente de utilizá-los integralmente ou não.
//Porém, se você utilizar mais do que 50 minutos, é cobrado mais R$ 1.50
//por cada minuto que passar dos 50 do seu plano.
//Receber quantos minutos foram gastos no mês e calcular o valor da conta.

#include<stdio.h>
int main()
{
float minutos, tempo, valor, total;

printf("digite o tempo extra utilizado da franquia");
scanf ("%f", &tempo);
valor=50;
minutos=1.50;

if (tempo > 50){
	  total=valor+minutos*(tempo-50);
   printf ("\n o valor total a ser pago eh %.2f reais:", total);}
   else{
   printf ("\n o valot total a ser pago eh %.2f reais", valor);
			}

return 0;}

