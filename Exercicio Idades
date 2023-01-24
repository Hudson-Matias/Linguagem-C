#include <stdio.h>
#include <stdlib.h>

int main()
{
    double idade1, idade2, med;
    char nome1[55],nome2[55];

    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    fseek(stdin,0,SEEK_END);
    gets(nome1);
    printf("Idade: ");
    scanf("%lf", &idade1);

    printf("Dados da segunda pessoa:\n");
    printf("Nome: ");
    fseek(stdin,0,SEEK_END);
    gets(nome2);
    printf("Idade: ");
    scanf("%lf", &idade2);

    med= (idade1+idade2)/2;

    printf("A idade media de %s e %s e de %.1lf anos.",nome1,nome2,med);

    return 0;
}
