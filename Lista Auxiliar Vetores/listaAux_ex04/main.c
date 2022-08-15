#include <stdio.h>
#include <stdlib.h>

void primo (int n);
int valor;

int main()
{
    printf("Digite um valor inteiro nao nulo\n");
    scanf("%d",&valor);
    primo(valor);
    return 0;
}

void primo (int n)
{
    int i=2;
    int isprimo;
    if (n>=2)
    {
        for(i; i<=n; i++)
        {
            for(int j=2; j<=i; j++)
            {
                if (j==i)
                {
                    isprimo=i;
                    break;
                }
                if ((i%j)==0)
                {
                    break;
                }
            }
        }
        printf("%d\n",isprimo);
    } else
        printf("1\n");
}
