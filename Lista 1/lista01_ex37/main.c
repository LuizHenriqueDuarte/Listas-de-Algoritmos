#include <stdio.h>
#include <stdlib.h>

int i,numero;
int main()
{
    printf("Digite um numero (preferencialmente de 1 a 9)\n");
    scanf("%d",&numero);
    for (i=1;i<=10;i++)
    {
        printf("%d: %d\n",i,numero*i);
    }
    return 0;
}
