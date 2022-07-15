#include <stdio.h>
#include <stdlib.h>

float numero;
int i,j=0;
int main()
{
    for (i=1; i<=20; i++)
    {
        printf("Digite um numero (esta operacao sera feita 20 vezes)\n");
        scanf("%f",&numero);
        if ((numero>=0)&&(numero<=100))
        {
            j++;
        }
    }
    printf("%d numeros digitados estao entre 0 e 100\n",j);
    return 0;
}
