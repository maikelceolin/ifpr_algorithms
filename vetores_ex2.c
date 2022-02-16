#include <stdio.h>
#include <math.h>


void main()
{
    int vetor1[5], vetor2[5], i, j;
    
    //leConjunto

    printf("\n\nDigite os valores para o conjunto A:  ");
    for(i=0; i<5;i++)
    {
        scanf("\t%d", &vetor1[i]);
      
    }

    printf("\n\nDigite os valores do conjunto B: ");
    for(i=0; i<5;i++)
    {
        scanf("\t%d", &vetor2[i]);
    }
         
    //tamanhoVetor
    int teste = 0;
    int k = 0; 
    int cont=0;
    for (i=0; i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(vetor1[i] == vetor2[j])
            {
                cont++;       
            }
        }  
    }

    //analisaIguais
    int intersec[cont];
    printf("\nConjunto A n B: ");
    for (i=0; i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(vetor1[i] == vetor2[j])
            {
                intersec[k] = vetor1[i];
                printf(" %d ", intersec[k]);
                k++;
            }
        }  
    }
    printf("\n\n");
}