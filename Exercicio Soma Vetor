#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    double soma,med;

    printf("Quantos numeros voce vai digitar?");
    scanf("%d",&n);

    double vet[n];

    for (int i=0;i<n;i++){
        printf("Digite um numero:");
        scanf("%lf", &vet[i]);
    }

    printf("\nVALORES: ");
    for (int i=0;i<n;i++){
        printf("%.1lf ", vet[i]);
    }
    printf("\n");

    soma=0;
    for (int i=0;i<n;i++){
        soma=soma+vet[i];
    }
    printf("SOMA = %.2lf\n",soma);

    med=soma/n;
    printf("MEDIA =%.2lf\n", med);

    return 0;
}
