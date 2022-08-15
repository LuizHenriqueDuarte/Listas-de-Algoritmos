#include <stdio.h>
#include <stdlib.h>

int teste(int n);
int valor;

int main()
{
    printf("Digite o valor\n");
    scanf("%d",&valor);
    printf("%d",teste(valor));
    return 0;
}

int teste(int n)
{
    int j=1;
    int aux=j;
    for(int i=2;i<=n;i++)
    {
        for(j;j<=1000;j++)
        {
            aux=aux*i;
            if(aux>=n)
                break;
        }
        if(aux==n)
        {
            return i;
            break;
        }
    }
}
