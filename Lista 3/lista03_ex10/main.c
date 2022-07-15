#include <stdio.h>
#include <stdlib.h>

int numero, i,j=0;
int main()
{
    for (i=1; i<=20; i++)
    {
        printf("Digite um numero inteiro (esta operacao sera feita 20 vezes)\n");
        scanf("%d",&numero);
        if ((numero%2)==0)
        {
            j++;
        }
    }
    printf("%d numeros digitados sao pares\n",j);
    return 0;
}
