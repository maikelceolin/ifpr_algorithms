#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>


char *strlwr(char *str);
int contaNomes (char *input);

void main()
{
    setlocale(LC_ALL, "Portuguese");
    char input[50];
    char *tok;
    int cont;
    
    printf("\nPreencha os dados para criação do login");
    printf("\nNome completo: ");
    gets(input);
    strlwr(input);

    cont = contaNomes(input);
    printf("%d", cont);
    char nomes[cont][100];

    strcpy(nomes[0],strtok(input, " "));
    printf("\n%s", nomes[0]);

    strcpy(nomes[1],strtok(NULL, " "));
    printf("\n%s", nomes[1]);

    strcpy(nomes[2],strtok(NULL, " "));
    printf("\n%s", nomes[2]);

    strcpy(nomes[3],strtok(NULL, " "));
    printf("\n%s", nomes[3]);


}

int contaNomes (char *input)
{
    char *tok;
    int cont = 0;
    tok = strtok(input," ");
    while(tok)
    {
        printf("nome: %s\n", tok);
        tok = strtok(NULL, " ");
        cont++;
    }
    return cont;
}


char *strlwr(char *str) //função strlwr. O linux só comtempla funções standard da string.h e não é o caso da "strlwr".
{
  unsigned char *p = (unsigned char *)str;

  while (*p) {
     *p = tolower((unsigned char)*p);
      p++;
  }

  return str;
}