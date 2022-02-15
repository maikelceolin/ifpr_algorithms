#include <stdio.h>
#include <stdlib.h>

int selecionaOpcao(float valor);
float preco1(float valor);
float preco2(float valor, int parcelas);
float preco3(float valor, int parcelas);
float calculaJuros(float valor, int parcelas, float taxa);
float pow(float a, float b);

int main(void)
{
    float valor;
    int option;
    printf("\n\nDigite o valor do produto em R$ (ex: 199.90): ");
    scanf("%f",&valor);
    option = selecionaOpcao(valor);

    if(option == 1)
    {
        printf("\nTotal a pagar: (R$%.2f - R$%.2f) = R$%.2f\n\n", valor, valor-preco1(valor), preco1(valor));
        return 0;
    }
    else if(option == 2)
    {
        printf("\nTotal a pagar: (R$%.2f) 3x R$%.2f\n\n", valor, preco2(valor, 3));
        return 0;
    }
    else if(option == 3)
    {
        int i,cont;
        printf("\nSelecione o parcelamento desejado:\n\n");
        for (i=4;i<=12;i++)
        {
            printf("(R$%.2f) %dx R$%.2f\n\n", preco3(valor, i), i, preco3(valor, i)/i);
        }
        while(1)
        {
            fflush(stdin);
            scanf("%d", &cont);
            if(cont>0 && cont<=12)
            {
            printf("\nTotal a pagar: (R$%.2f) %dx R$%.2f\n\n", preco3(valor, cont), cont, preco3(valor, cont)/cont);
            return 0;
            }
            else
            {
                printf("\n!!! Atenção: parcelamento de 4x até 12x !!!\n\nDigite novamente:");
            }
        }
    }
}
// Opção 1: A vista com 5%% de desconto.
float preco1(float valor)
{
    float preco;
    float desconto = 0.05;
    return preco = valor*(1-desconto);
}

// Opção 2: Em três vezes (preço da etiqueta)
float preco2(float valor, int parcelas)
{
    float preco;
    return preco = valor/parcelas;
}

// Opção 3: De 4 até 12 vezes com 2%% de juros ao mês
float preco3(float valor, int parcelas)
{
    float preco;
    float taxa = 0.02;
    return preco = calculaJuros(valor, parcelas, taxa);
}

float calculaJuros(float valor, int parcelas, float taxa)
{
    float mont;
    mont = (valor)*pow((1 + (taxa)), parcelas);
    return mont;
}

int selecionaOpcao(float valor)
{
    int opcao;
    while(1)
    {
        printf("\n-------------------------------");
        printf("\nSELECIONE A OPÇÃO DESEJADA:\n");
        printf("-------------------------------");
        printf("\n\nVALOR A PAGAR: %.2f\n", valor);
        printf("\nOpção 1: A vista com 5%% de desconto.\n");
        printf("Opção 2: Em três vezes (preço da etiqueta).\n");
        printf("Opção 3: De 4 até 12 vezes com 2%% de juros ao mês (somente para compras acima de R$ 250,00).\n\n");
        fflush(stdin);
        scanf("%d", &opcao);
        if(opcao == 1)
        {
            return opcao;
        }
        else if (opcao == 2)
        {
            return opcao;
        }
        else if (opcao == 3)
        {
            if(valor>=250)
            {
                return opcao;
            }
            else
            {
                printf("Para esta opção, o valor deve ser no mínimo de R$ 250,00\n");
            }
        }
        else
        {
            printf("\n !!! Atenção: Digite uma opção válida !!! \n\n");
        }
    }
}

float pow(float a, float b)
{
    float value, n = 1;
    if (b == 0) 
    {
        return 1;
    }
    for (value = a; n < b; value = value * a)
    {
         n++;
    }
    return value;
}