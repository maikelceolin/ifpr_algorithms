#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void imprimeResultado(float v, char *n, int *t);
void line();


typedef struct
{
    char nome[100];
    float vendas[3];
    int pontos[3];

} Cadastro;


void main()
{
    Cadastro funcionario[15];
    float total_venda = 0;
    int total_pts[15];
    int pt_maior = 0, cont = 0, id = 0;
    for (int i=0;i<15;i++)
    {
        printf("\n\nDigite o nome do funcionario %d: ", i+1);
        fflush(stdin);
        scanf("%s", funcionario[i].nome);
        printf("\nOlá, %s\n", funcionario[i].nome);
        
        for(int j=0;j<3;j++)   //le vendas
        {
            printf("\nDigite as vendas do %dº mes: ", j+1);
            fflush(stdin);
            scanf("%f", &funcionario[i].vendas[j]);
            total_venda += funcionario[i].vendas[j]; //soma total de vendas
            funcionario[i].pontos[j] = (funcionario[i].vendas[j])/100; //calcula pontos
            total_pts[i] += funcionario[i].pontos[j]; //armazena total de pontos

        }

        if (total_pts[i]>pt_maior) //identifica pontuação pt_maior
        {
            pt_maior = total_pts[i];
            id = i;
        }

        //mostra valores
        line();
        printf(" VALOR\t\tPONTOS");
        line();
        for(int j=0;j<3;j++)   
        {
            printf("\nR$%.2f\t%d\n", funcionario[i].vendas[j],funcionario[i].pontos[j]);
        }
        printf("\nTotal de pontos: %.d\n", total_pts[i]);
        line();

    }
    
    imprimeResultado(total_venda, funcionario[id].nome, total_pts[id]);
}

void imprimeResultado(float v, char *n, int *t)
{
    printf("\n\nRESULTADO:\n");
    printf("\nTotal geral de vendas: R$%.2f\n", v);
    printf("\nFuncionário destaque: %s\n", n);
    printf("\nTotal de Pontos: %d\n\n", t);
}

void line()
{
    printf("\n-----------------------------------\n");
}