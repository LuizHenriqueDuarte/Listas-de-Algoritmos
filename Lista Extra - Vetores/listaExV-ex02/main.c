#include <stdio.h>
#include <stdlib.h>

int numero, vetor[6];
int main()
{
    for(int i=0; i<6; i++)
    {
        printf("Digite um numero\n");
        scanf("%d",&numero);
        vetor[i]=numero;
    }
    for(int i=0; i<6; i++)
    {
        printf("%d",vetor[i]);
    }
}
