#include <stdio.h>
#include <stdlib.h>

float massa,valor;
int main()
{
    printf("Digite o valor medido pela balanca em quilogramas\n");
    scanf("%f",&massa);
    valor=12*massa;
    printf("O cliente devera pagar %.3f Reais\n",valor);
    return 0;
}
