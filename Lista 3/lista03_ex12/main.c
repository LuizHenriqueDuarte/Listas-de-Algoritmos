#include <stdio.h>
#include <stdlib.h>

int numero, i,j=0,k=0,l=0;
int main()
{
    for (i=1; i<=20; i++)
    {
        printf("Digite um numero (esta operacao sera feita 20 vezes)\n");
        scanf("%d",&numero);
        if ((numero>=0)&&(numero<=100))
        {
            j++;
        } else if ((numero>=101)&&(numero<=200))
        {
            k++;
        } else if (numero>200)
        {
            l++;
        }
    }
    printf("\n%d numeros digitados estao entre 0 e 100, %d estao entre 101 e 200, %d sao maiores que 200\n",j,k,l);
    return 0;
}
