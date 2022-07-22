#include <stdio.h>
#include <stdlib.h>

int i,vetor[20],par=0,impar=0,maior=0,menor=0;
int main()
{
    for (i=0;i<20;i++)
    {
        printf("Digite o %d%c valor do vetor\n",i+1,167);
        scanf("%d",&vetor[i]);
        if ((vetor[i]%2)==0)
        {
            par++;
        } else
        {
            impar++;
        }
        if (vetor[i]>50)
        {
            maior++;
        } else if (vetor[i]<7)
        {
            menor++;
        }
    }
    printf("Pares: %d\nImpares: %d\nMaiores que 50: %d\nMenores que 7: %d\n",par,impar,maior,menor);

}
