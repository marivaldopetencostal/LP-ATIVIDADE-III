#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    char nomeProduto[99][200];
    float preco[99];
    int quantidade[99];
    int i = 0;
    int j = 0;
    int resp = 0;
    float totalVendas = 0;

    do
    {
        printf("1. Continuar cadastrando\n");
        printf("2. Encerrar e mostrar os n�meros\n");
        scanf("%d", &resp);
        puts("");

        if (resp == 1)

        {
        printf("Digite o nome do %d° PRODUTO: ", i + 1);
        scanf("%s",&nomeProduto[i]);

        printf("Digite o valor do %d° PRODUTO: ",i + 1);
        scanf("%f", &preco[i]);
       
        printf("Digite a quantidade do %d� PRODUTO: ",i + 1);
        scanf("%d", &quantidade[i]);
totalVendas = totalVendas + preco[i];
            i = i + 1;
            
        }

    

    } while (resp == 1);

        printf("Total de vendas foi de R$ %f\n", totalVendas);

    return 0;
}
