#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nome[5][300];
    int idade[5];
    float peso[5];
    float altura[5];
    int i, j;
    int maior;
    int menor;
    char idadeNomemaior[300];
    char idadeNomemenor[300];
    float maiorPeso = 0;
    float menorPeso = 999;
    char maiorPesoPS[300];
    char menorPesoPS[300];
    float maiorAltura = 0;
    float menorAltura = 999;
    char maiorAlturaPS[300];
    char menorAlturaPS[300];

    for (i = 0; i < 3; i++)
    {
        fflush(stdin);
        printf("Digite o nome: ");
        gets(nome[i]);

        fflush(stdin);

        printf("Digite idade: ");
        scanf("%d", &idade[i]);

        fflush(stdin);

        printf("Digite peso: ");
        scanf("%f", &peso[i]);

        fflush(stdin);

        printf("Digite altura: ");
        scanf("%f", &altura[i]);
        puts("");

        
        if (idade[i] > maior)
        {
            maior = idade[i];
            strcpy(idadeNomemaior, nome[i]);
        }
        else if (idade[i] < menor) {
            menor = idade[i];
            strcpy(idadeNomemenor, nome[i]);
        }
        

        
        if (peso[i] > maiorPeso)
        {
            maiorPeso = peso[i];
            strcpy(maiorPesoPS, nome[i]);
         
        }
         else if (peso[i] < menorPeso)
        {
            menorPeso = peso[i];
            strcpy(menorPesoPS, nome[i]);
        }
        

        
        if (altura[i] > maiorAltura)
        {
            maiorAltura = altura[i];
            strcpy(maiorAlturaPS, nome[i]);
        }

        else if (altura[i] < menorAltura)
        {
            menorAltura = altura[i];
            strcpy(menorAlturaPS, nome[i]);
        }
        
         
    }

    printf("Pessoa mais velha: %s\n", idadeNomemaior);
    printf("Maior idade: %d \n", maior);
    printf("Pessoa mais nova: %s\n", idadeNomemenor);
    printf("Menor idade: %d \n", menor);

    printf("\n");

    printf("Pessoa mais pesada: %s\n", maiorPesoPS);
    printf("Maior peso: %f\n", maiorPeso);
    printf("Pessoa mais leve: %s\n", menorPesoPS);
    printf("Menor peso: %f\n", menorPeso);

    printf("\n");

    printf("Pessoa mais alta: %s \n", maiorAlturaPS);
    printf("Maior altura: %f \n", maiorAltura);
    printf("Pessoa mais baixa: %s \n", menorAlturaPS);
    printf("Menor altura: %f \n", menorAltura);

    return 0;
}
