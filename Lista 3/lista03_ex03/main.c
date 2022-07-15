#include <stdio.h>
#include <stdlib.h>

int i;
char nome[30];
int main()
{
    printf("Qual seu nome?\n");
    gets(nome);
    printf("\n\n");
    for (i=1;i<=10;i++)
        printf("%s\n",nome);
    return 0;
}
