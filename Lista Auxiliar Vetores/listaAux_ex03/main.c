#include <stdio.h>
#include <stdlib.h>

void fibonacci(int n);
int numero;

int main()
{
    printf("Digite um numero\n");
    scanf("%d",&numero);
    fibonacci(numero);
    return 0;
}

void fibonacci(int n)
{
    int j=1;
    int i=0;
    int t;
    do
    {
        t=i+j;
        i=j;
        j=t;
    } while (j<n);
    if (n==0)
        printf("0\n");
    else
    printf("%d\n",j);
}


