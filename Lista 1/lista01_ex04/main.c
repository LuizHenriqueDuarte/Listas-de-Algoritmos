#include <stdio.h>
#include <stdlib.h>

long int idade;
char nome[15];
int main()
{
    printf("Qual seu nome?\n");
    scanf("%s",nome);
    printf("Digite sua idade em anos\n");
    scanf("%d",&idade);
    idade=idade*365;
    printf("%s voce ja viveu %ld dias\n",nome,idade);
    return 0;
}
