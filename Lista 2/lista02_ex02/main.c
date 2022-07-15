#include <stdio.h>
#include <stdlib.h>

int numero;
int main()
{
    printf("Digite um numero inteiro\n");
    scanf("%d",&numero);
    if ((numero%2)==0)
    {
        printf("O numero eh par\n");
    } else
    {
        printf("O numero eh impar\n");
    }
    return 0;
}
