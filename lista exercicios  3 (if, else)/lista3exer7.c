//Implemente um programa que calcule aumento de salário no ano corrente.
//Se o salário for de até R$ 1000.00 deve ser calculado o novo salário
//com aumento de 5%, para um salário maior que R$ 1000.00 o aumento é de 7%.

int main()
{
float salario, salarioatemil, salariomaior;

printf("digite o valor do salari: ");
scanf ("%f", &salario);
salarioatemil=(salarioatemil+salario)*105/100;
salariomaior=(salariomaior+salario)*107/100;

if (salario < 1000){
   printf ("\n esse salario teve um aumento de 5 porcento e foi para: %.2f reais", salarioatemil);}
   else{
   printf ("\n esse salario teve um aumento de 7 porcento e foi para: %.2f reais", salariomaior);}

return 0;}

