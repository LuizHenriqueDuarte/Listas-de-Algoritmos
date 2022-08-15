#include <stdio.h>
#include <stdlib.h>

int numero, vetor[10],quadrado[10];
int main()
{
    for(int i=0; i<10; i++)
    {
        printf("Digite um numero\n");
        scanf("%d",&numero);
        vetor[i]=numero;
    }
    for(int i=0; i<10; i++)
    {
        quadrado[i]=pow(vetor[i],2);
    }
    for(int i=0; i<10; i++)
    {
        printf("%d ",quadrado[i]);
    }
}
