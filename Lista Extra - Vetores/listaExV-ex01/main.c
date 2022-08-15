#include <stdio.h>
#include <stdlib.h>

int vetor[]={1,0,5,-2,-5,7},valor;
int main()
{
    valor=vetor[0]+vetor[1]+vetor[5];
    printf("Soma: %d\n",valor);
    vetor[4]=100;
    for(int i=0;i<=5;i++)
    {
        printf("A[%d]=%d\n",i,vetor[i]);
    }
    return 0;
}
