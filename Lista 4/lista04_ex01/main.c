#include <stdio.h>
#include <stdlib.h>

int i, primeiro[10], segundo[10], terceiro[10];
int main()
{
    for (i=0;i<10;i++)
    {
        printf("Digite o %d%c valor do primeiro vetor\n",i+1,167);
        scanf("%d",&primeiro[i]);
    }
    printf("\n\n");
    for (i=0;i<10;i++)
    {
        printf("Digite o %d%c valor do segundo vetor\n",i+1,167);
        scanf("%d",&segundo[i]);
    }
    printf("\n\n");
    for (i=0;i<10;i++)
    {
        terceiro[i]=primeiro[i]+segundo[i];
        printf("Vetor[%d]: %d\n",i,terceiro[i]);
    }
    return 0;
}
