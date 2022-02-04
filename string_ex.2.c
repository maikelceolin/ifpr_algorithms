#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>


char *reverse(char *s);

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, comp = 0;
    char palavra[15], inversa[15];
    printf("\nDigite uma palavra: ");
    gets(palavra);

    //transformar minusculo para nao dar conflito
    for(i = 0; palavra[i]; i++) 
    {
        palavra[i] = tolower(palavra[i]);
    }
    strcpy(inversa, palavra); //mudar endereco de veriavel
    reverse(inversa); //inverter conteúdo

    comp = strcmp(palavra, inversa);

    if (comp == 0)
    {
        printf("\nSim. Esta palavra é palíndroma\n\n");
    }
    else
    {
        printf("\nNão. Esta palavra é palíndroma\n\n");
    }
}

char *reverse(char *s)
{
    int len = strlen(s) ;
    int c, i, j;

    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
    return s;
}