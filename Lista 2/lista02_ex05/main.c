#include <stdio.h>
#include <stdlib.h>

int numero;
int main()
{
    printf("Digite um numero inteiro\n");
    scanf("%d",&numero);
    if ((numero%2)==0)
    {
        printf("%d\n",numero+5);
    } else
    {
        printf("%d\n",numero+8);
    }
    return 0;
}
