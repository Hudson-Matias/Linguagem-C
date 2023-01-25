#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, nmenores;
    double soma,med,ppmenores;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d",&n);

    char nomes[n][50];
    int idades[n];
    double altura[n];

    for (int i=0;i<n;i++){
        printf("Dados da %da pessoa: \n", i+1);
        printf("Nome: ");
        fseek(stdin,0,SEEK_END);
        gets(nomes[i]);
        printf("Idade: ");
        scanf("%d",&idades[i]);
        printf("Altura: ");
        scanf("%lf",&altura[i]);
    }

    soma=0;
    for (int i=0;i<n;i++){
        soma=soma+altura[i];
    }

    med=soma/n;
    printf("Altura media: %.2lf\n", med);

    nmenores=0;
    for(int i=0;i<n;i++){
        if (idades[i]<16){
            nmenores++;
        }
    }

    ppmenores=nmenores*100.0/n;
    printf("Pesssoas com menos de 16 anos: %.1lf %%\n", ppmenores);



    return 0;
}
