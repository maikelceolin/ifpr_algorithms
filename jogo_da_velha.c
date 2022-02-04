 #include “stdio.h”
 #include “stdlib.h”
3          
4     void main() {
5           FILE *arq;
6           arq = fopen(“arquivo.txt”, “w”);
7           printf(“O arquivo foi criado!”);
8           fclose(arq);
9     }