#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int idade;
   double sal, alt;

   printf("Digite o valor da idade: ");
   scanf("%d", &idade);
   printf("Digite o valor do salario: ");
   scanf("%lf", &sal);
   printf("Digite o valor da altura: ");
   scanf("%lf", &alt);

   printf("IDADE = %d\n", idade);
   printf("SALARIO = %.2lf\n", sal);
   printf("ALTURA = %.2lf\n", alt);

    return 0;
}
