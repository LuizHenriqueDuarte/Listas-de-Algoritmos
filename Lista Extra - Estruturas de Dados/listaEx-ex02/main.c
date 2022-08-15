#include <stdio.h>
#include <stdlib.h>
int numero,limite,invalido,taboo=0;
int main()
{
    do
    {
        invalido=0;
        printf("Digite um numero para calcular sua taboada e um limite para a taboada\n");
        scanf("%d %d",&numero, &limite);
        taboo=numero;
        if(numero>=2 && numero<=9)
        {
            do{
                printf("%d\n",taboo);
                taboo=taboo+numero;
            } while(taboo<=limite);

        }
        else
        {
            printf("O numero digitado eh invalido\n\n");
            invalido=1;
        }
    } while(invalido);

    return 0;
}
