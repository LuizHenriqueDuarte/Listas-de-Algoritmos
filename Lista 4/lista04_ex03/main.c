#include <stdio.h>
#include <stdlib.h>

int i,A[8],B[8];
int main()
{
    for (i=0;i<8;i++)
    {
        printf("Digite o %d%c valor do vetor\n",i+1,167);
        scanf("%d",&A[i]);
    }
    printf("\n\n");
    for (i=0;i<8;i++)
    {
        B[i]=2*A[i];
        printf("B[%d]: %d\n",i,B[i]);
    }
    return 0;
}
