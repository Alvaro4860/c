#include <stdio.h>
//calculo de velocidade média.

int main()
{
float per;
float tempo;
float vm;

printf("digite a distancia percorrida ");
scanf("%f", &per);
printf("digite o tempo da corrida em horas ");
scanf("%f", &tempo);

vm = per/tempo;
printf("a velocidade media foi de: %f", vm);

return 0;
}
