#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
  int i,j;  
char nome[5][200];
int idade[5];
float notas[5][3];
float soma = 0;
float media[5];



for ( i = 0; i < 5; i++)
{
    printf("\n");
    printf("Digite o %d° nome:", i + 1);
    gets(nome[i]);
fflush(stdin);
    printf("Digite sua %d° idade :", i + 1);
    scanf("%d",&idade[i]);

fflush(stdin);
    for ( j = 0; j < 3; j++)
    {
      
        printf("Digite sua %d° nota :", j + 1);
        scanf("%f", &notas[i][j]);
        soma = soma + notas[i][j];
    }
    media[i] = soma / j;
    soma = 0;
    fflush(stdin);
}
for ( i = 0; i < 5; i++)
{
   printf("\n"); 
  printf("nomes: %s \n", nome[i]);
  printf("idades: %d \n", idade[i]);

  for ( j = 0; j < 3; j++)
  {
    
    printf("notas: %.1f \n",notas[i][j]);
  }
  printf("media: %.1f \n",media[i] );
{
  if (media[i] >= 7)
        {
            printf("aprovado \n");
        }

        else if (media[i] >= 5 && media[i] < 7)
        {
            printf("recuperacao \n");
        }
        else
        {

            printf("reprovado \n");
        }
  }
  
}


    
    getchar();
    return 0;
}