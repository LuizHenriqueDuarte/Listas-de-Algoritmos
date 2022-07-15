#include <stdio.h>
#include <stdlib.h>

float drink,prato;
int main()
{
    do
    {
        printf("Digite o valor da bebida selecionada e a massa (em Kg) do prato com comida\n");
        scanf("%f %f",&drink,&prato);
        if ((drink!=0) || (prato!=0))
                printf("O valor total eh: %.2f\n",drink+prato*23.59);
    } while ((drink!=0) || (prato!=0));

    return 0;
}
