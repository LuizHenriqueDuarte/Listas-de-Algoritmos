#include <stdio.h>
#include <stdlib.h>

int D[10], novo[10], i, j=0;
int main()
{
    for (i=0;i<10;i++)
    {
        printf("Digite o %d%c valor do vetor D\n",i+1,167);
        scanf("%d",&D[i]);
        if (D[i]>0)
        {
            novo[j]=D[i];
            j++;
        }
    }
    printf("\n");
    for (i=0;i<j;i++)
    {
        printf("D[%d]: %d\n",i,novo[i]);
    }
}
