#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nota1, nota2, med;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    med=nota1+nota2;

    printf("NOTA FINAL: %.1lf\n", med);

    if (med<60.0){
        printf("REPROVADO");
    }

    return 0;
}
