#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i;
    int numero[5];
    int pares = 0;
    int impares = 0;
    float somapares = 0;
    float somaimpares = 0;
    float positivo = 0;
    int negativo = 0;
    int quantidade = 0;
    int menornumero = 0;
    int maiornumero = 0;
    float mediapares = 0;
    float somanumero = 0;
    float medianumero = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %d° numero:", i + 1);
        scanf("%d", &numero[i]);

        somanumero = somanumero + numero[i];

        if (numero[i] % 2 == 0)
        {
            pares++;
            somapares = somapares + numero[i];
        }
        else
        {

            impares++;
            somaimpares = somaimpares + numero[i];
        }

        if (numero[i] > 0)
        {
            positivo++;
        }
        else
        {

            negativo++;
        }

        if (numero[i])
        {
            quantidade++;
           
        }

        if (numero[i] < menornumero)
        {
            menornumero = numero[i];
        }
        else if (numero[i] > maiornumero)
        {

            maiornumero = numero[i];
        }
    }


    medianumero = somanumero /(float) i;
    mediapares = somapares / (float) i;

    printf("Quantidades de nuneros impares: %d \n", impares);
    printf("Media de numeros pares: %.1f \n", mediapares);
    printf("Quantidades de nuneros negativos: %d \n", negativo);
    printf("Quantidades de maior numero: %d \n", maiornumero);
    printf("Quantidades de menor nuneros : %d \n", menornumero);
    printf("Media de nuneros inseridos : %.1f \n", medianumero);

    getchar();
    return 0;
}