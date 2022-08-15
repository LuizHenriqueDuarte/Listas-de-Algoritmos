#include <stdio.h>
#include <stdlib.h>

long long int fat(int n);
long long int morefat(int vezes);
int numero, quantidade;
int main()
{
    printf("Digite o valor para o fatorial\n");
    scanf("%d",&numero);
    printf("%lld\n",fat(numero));
    printf("Agora digite quantos fatoriais voce quer que seja impresso (1 a n)\n");
    scanf("%d",&quantidade);
    morefat(quantidade);
    return 0;
}

long long int fat(int n)
{
    if (n>0)
    for(int i=(n-1);i>1;i--)
    {
        n=n*i;
    }
    else
        n=1;
    return n;
}

long long int morefat(int vezes)
{
    for (int i=1;i<=vezes;i++)
    {
        printf("%d!: %lld\n",i,fat(i));
    }
}
