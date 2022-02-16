#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char *strlwr(char *str);

void main() 
{
	char input[50]; char name[10][30];//matriz com 10 nomes, improvável ter mais de 10.
    char *tok; int i = 0;
    printf("\nDigite seu nome completo: ");
    gets(input);
    strlwr(input);//tudo minusculo
    
    tok = strtok(input, " "); //separa primeira palavra
    while(tok) //separa demais palavras
    {
        strcpy(name[i],tok);
        tok = strtok(NULL, " \0");
        i++;
    }

    char init[10] = {name[0][0]}; //opcao 1 inicial
    char init2[10] = {name[0][0], name[1][0]}; //opcao 2 iniciais

    if(i == 2) //i contou quantos nomes
    {
        printf("login: %s\n\n", strcat(init,name[i-1]));
    }
    else
    {
        printf("login: %s\n\n", strcat(init2,name[i-1]));
    }
}

char *strlwr(char *str) //inseri esta funcao manualmente porque uso linux. strlwr não faz parte da biblioteca padrão.
{
  unsigned char *p = (unsigned char *)str;
  while (*p)
  {
     *p = tolower((unsigned char)*p);
      p++;
  }
  return str;
}