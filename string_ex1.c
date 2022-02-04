#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


char *reverse(char *s);

void main()
{
    setlocale(LC_ALL, "Portuguese");
    char frase[50];
    printf("\nDigite a frase: ");
    gets(frase);
    printf("%s\n\n", reverse(frase) );
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