#include <stdio.h>
#include <stdlib.h>

int ano,valor;
float imposto;
int main()
{
    printf("Informe o ano de fabricacao e o valor de tabela do carro respectivamente\n");
    scanf("%d %d",&ano,&valor);
    if (ano<1990 && ano>1880)
    {
        imposto=0.01*valor;
    } else if (ano>=1990)
    {
        imposto=0.015*valor;
    } else
    {
        printf("Ano digitado invalido\n");
        exit(0);
    }
    printf("A taxa eh: %.2f Reais\n",imposto);
    return 0;
}
