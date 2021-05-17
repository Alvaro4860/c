#include <stdio.h>
// exercicio: calculo de média

int main()
{
float n1;
float n2;
float media;

printf("DIGITE O PRIMEIRO NUMERO ");
scanf("%f", &n1);

printf("DIGITE O SEGUMDO NUMERO ");
scanf("%f", &n2);

media = (n1+n2)/2;
printf("a media eh: %f", media);

return 0;
}
