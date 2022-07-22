#include <stdio.h>
#include <stdlib.h>

int LOTO[5], aposta[10], i,j,ponto=0;
int main()
{
    for (i=0;i<5;i++)
    {
        printf("Digite o %d%c valor da loteria\n",i+1,167);
        scanf("%d",&LOTO[i]);
    }
    for (i=0;i<10;i++)
    {
        printf("Digite o %d%c valor da aposta\n",i+1,167);
        scanf("%d",&aposta[i]);
    }
    for (i=0;i<10;i++)
    {
        for (j=0;j<5;j++)
        {
            if (LOTO[j]==aposta[i])
            {
                ponto++;
            }
        }
    }
    printf("\nO apostador fez %d pontos\n",ponto);

}
