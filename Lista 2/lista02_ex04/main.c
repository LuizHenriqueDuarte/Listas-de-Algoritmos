#include <stdio.h>
#include <stdlib.h>

int numero,result;
int main()
{
    printf("Digite um numero positivo ou negativo\n");
    scanf("%d",&numero);
    if (numero>=0)
    {
        result=numero*2;
    } else
    {
        result=numero*3;
    }
    printf("%d\n",result);
    return 0;
}
