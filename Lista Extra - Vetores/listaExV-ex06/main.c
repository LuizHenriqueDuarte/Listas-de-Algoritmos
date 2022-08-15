#include <stdio.h>
#include <stdlib.h>

int numero, vetor[10], isbig=0;
int main()
{
    for(int i=0; i<10; i++)
    {
        printf("Digite um numero\n");
        scanf("%d",&numero);
        vetor[i]=numero;
    }
    int issmall=vetor[0];
    for(int i=0;i<10;i++)
    {
        if(vetor[i]>isbig)
            isbig=vetor[i];
        else if(vetor[i]<issmall)
            issmall=vetor[i];
    }
    printf("Maior: %d\nMenor: %d\n\n",isbig,issmall);
}
