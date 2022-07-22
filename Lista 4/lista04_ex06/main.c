#include <stdio.h>
#include <stdlib.h>

int i,idade[10], maior=0, menor,posmaior,posmenor;
int main()
{
    for (i=0;i<10;i++)
    {
        printf("Digite a idade da %d%c pessoa\n",i+1,167);
        scanf("%d",&idade[i]);
    }
    menor=idade[0];
    for (i=0;i<10;i++)
    {
        if (idade[i]>maior)
        {
            maior=idade[i];
            posmaior=i;
        } else if (idade[i]<menor)
        {
            menor=idade[i];
            posmenor=i;
        }
    }
    printf("\nA maior idade eh: %d, na posicao %d\nA menor idade eh: %d, na posicao %d\n",maior,posmaior+1,menor,posmenor+1);
}
