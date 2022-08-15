#include <stdio.h>
#include <stdlib.h>

int numero;
int main()
{
    printf("Digite um numero impar\n");
    scanf("%d",&numero);
    if(numero%2!=0)
    {
        for(int i=0;i<=numero-1;i++)
        {
            for(int j=0;j<=numero-1;j++)
            {
                if(i==j || i+j==numero-1)
                {
                    printf("*");
                } else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
