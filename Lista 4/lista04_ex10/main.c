#include <stdio.h>
#include <stdlib.h>

int vetor[10],i,j,aux;
int main()
{
    for (i=0;i<10;i++)
    {
        printf("Digite o %d%c valor deste vetor\n",i+1,167);
        scanf("%d",&vetor[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<9;j++)
        {
            if (vetor[j+1]<vetor[j])
            {
                aux=vetor[j];
                vetor[j]=vetor[j+1];
                vetor[j+1]=aux;
            }
        }
    }
    for (i=0;i<10;i++)
    {
        printf("V[%d]: %d\n",i,vetor[i]);
    }
    return 0;
}
