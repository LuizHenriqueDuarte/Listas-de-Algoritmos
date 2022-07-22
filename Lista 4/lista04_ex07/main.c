#include <stdio.h>
#include <stdlib.h>

int R[5], S[10], X[5],i,j,k=0;
int main()
{
    for (i=0;i<5;i++)
    {
        printf("Digite o %d%c valor do vetor R\n",i+1,167);
        scanf("%d",&R[i]);
    }
    for (i=0;i<10;i++)
    {
        printf("Digite o %d%c valor do vetor S\n",i+1,167);
        scanf("%d",&S[i]);
    }
    for (i=0;i<10;i++)
    {
        for (j=0;j<5;j++)
        {
            if (R[j]==S[i])
            {
                X[k]=R[j];
                printf("X[%d]: %d\n",k,X[k]);
                k++;
            }
        }
    }
}
