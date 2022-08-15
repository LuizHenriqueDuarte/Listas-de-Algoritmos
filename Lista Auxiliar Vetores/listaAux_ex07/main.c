#include <stdio.h>
#include <stdlib.h>

int teste(int n);
int number;
int main()
{
    printf("Digite um numero inteiro\n");
    scanf("%d",&number);
    printf("%d\n",teste(number));
    return 0;
}

int teste(int n)
{
    int valor=1;
    for(int i=2; i<=n; i++)
    {
        do
        {

            valor=valor*i;

        } while(valor<=n);

        if(valor==n)
        {
            return i;
            break;
        } else
        {
            valor=1;
        }
    }
}
