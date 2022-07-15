#include <stdio.h>
#include <stdlib.h>

int i,n;
char nome[30];
int main()
{
    printf("Qual seu nome?\n");
    gets(nome);
    printf("Agora digite o numero de vezes que voce quer imprimir seu nome\n");
    scanf("%d",&n);
    printf("\n\n");
    for (i=1;i<=n;i++)
        printf("%s\n",nome);
    return 0;
}
