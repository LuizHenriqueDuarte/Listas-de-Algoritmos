#include <stdio.h>
#include <stdlib.h>
int x,y,z,aux;
int main()
{
    printf("Digite tres numeros inteiros\n");
    scanf("%d %d %d",&x,&y,&z);
    int vetor[]={x,y,z};
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=1;j++)
        {
            if(vetor[j+1]<vetor[j])
            {
                aux=vetor[j];
                vetor[j]=vetor[j+1];
                vetor[j+1]=aux;
            }
        }
    }
    printf("O maior valor digitado eh: %d e o menor valor eh: %d\n",vetor[2],vetor[0]);

    return 0;
}
