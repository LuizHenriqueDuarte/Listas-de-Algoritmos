#include <stdio.h>
#include <stdlib.h>

long int fat=1;
int numero,i;
int main()
{
    printf("Digite um numero inteiro\n");
    scanf("%d",&numero);
    for(i=numero;i>=1;i--)
    {
        fat=fat*i;
    }
    printf("O fatorial do numero eh: %d\n",fat);
    return 0;
}
