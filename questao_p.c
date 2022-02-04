#include <stdio.h>
#include <math.h>

void main()
{
    float numeros[15];
    int i;
    for (i=0;i < 15; i++)
    {
        printf("Digite o numero %d", i+1);
        scanf ("%f", &numeros[i]);
    }
    float maior = numeros [0];
    int position = 0;
    for (i = 1; i < 15; i++)
    {
        if (numeros[i] > maior)
        {
            maior = numeros[i];
            position = i;
        }
    }
    printf ([],numeros);
    
}

