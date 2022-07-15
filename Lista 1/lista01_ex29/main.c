#include <stdio.h>
#include <stdlib.h>

float preco;
int main()
{
    printf("Digite o preco do produto\n");
    scanf("%f",&preco);
    preco=preco*0.9;
    printf("O novo preco eh: %.2f Reais\n",preco);
    return 0;
}
