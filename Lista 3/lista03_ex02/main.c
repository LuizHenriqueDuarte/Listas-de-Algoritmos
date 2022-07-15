#include <stdio.h>
#include <stdlib.h>

int a,b,i=0,soma=0,aux;
int main()
{
    do {
    printf("Digite dois numeros inteiros de maneira a formar um intervalo\n");
    scanf("%d %d",&a,&b);
    if (a>b)
        i=a-b;
    else if (b>a)
    {
        i=b-a;
        aux=b;
        b=a;
        a=aux;
    }
    else
        printf("Nao tem intervalo se os numeros digitados forem iguais, DUH, tente de novo\n\n");
    } while (i==0);
    for (b;b<=a;b++)
    {
        soma=soma+b;
    }
    printf("O somatorio eh: %d\n",soma);
    return 0;
}
