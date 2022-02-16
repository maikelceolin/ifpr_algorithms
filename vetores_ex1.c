#include <stdio.h>
#include <math.h>


void main()
{
    int vetor1[5], vetor2[5], vetor_uniao[10], valor, i, j;
    
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
    

    //atribui conjunto A

    for (i=0; i<5; i++)
    {
        vetor_uniao[i] = vetor1[i];
    }
        
    //analisaConjuntoB
    for (i=0; i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(vetor2[i] != vetor_uniao[j])
            {
                vetor_uniao[i+5] = vetor2[i];
            }
        }  
    }
    
    
    //imprimeConjunto
    printf("\nConjunto A U B: ");
    for (i=0; i<10;i++)
    {
        printf(" %d ", vetor_uniao[i]);
    }
    printf("\n\n");

}