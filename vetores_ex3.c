#include <stdio.h>
#include "stdlib.h"
#include "locale.h"


void main()
{
    setlocale(LC_ALL, "Portuguese");
    float precoProduto[10];
    int qtdeVendas[10];
    float totalProduto[10];
    float somaTotal = 0;
    float salario = 1200;
    float comissao = 0.07;
    float liderVendas = 0;
    int cont=0;
    int i;

    printf("\nInforme o valor dos produtos: ");
   
    for (i=0; i<10;i++)
    {
        //leVendas
        printf("\nValor do produto %d: ", i+1);
        scanf("%f", &precoProduto[i]);
        printf("Qtde vendida: ");
        scanf("%d", &qtdeVendas[i]);
        totalProduto[i] = qtdeVendas[i]*precoProduto[i]; //total de vendas
        somaTotal += totalProduto[i];

        if(qtdeVendas[i]>liderVendas) // mais Vendido
            {
                liderVendas = qtdeVendas[i];
                cont=i;
            }
    }
    

    //Relatório
    printf("\n\n>>>>>>>>>>>> Relatório Final de Vendas <<<<<<<<<<<< \n\n");
    printf("\tProduto\t Qtde \t Preço \t Total\n", i);
    for (i=0; i<10;i++)
    {
        printf("\t%d \t %d \t R$%.2f \t R$%.2f\n", i+1, qtdeVendas[i],precoProduto[i],totalProduto[i]);
    }
    printf("\n\tTotal: R$%.2f", somaTotal);
    printf("\n\tProduto mais vendido: %.d\tPreco: R$%.2f", cont+1 ,precoProduto[cont]);
    printf("\n\tComissão: R$%.2f", somaTotal*comissao);
    printf("\n\tRemuneração final: R$%.2f\n\n", salario + somaTotal*comissao);
}
