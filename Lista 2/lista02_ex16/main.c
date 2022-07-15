#include <stdio.h>
#include <stdlib.h>

int saldo;
float credito;
int main()
{
    printf("Digite o saldo medio do cliente no ultimo ano\n");
    scanf("%d",&saldo);
    if (saldo>=0 && saldo<=200)
    {
        credito=saldo*0;
    } else if (saldo>=201 && saldo<=400)
    {
        credito=saldo*0.2;
    } else if (saldo>=401 && saldo<=600)
    {
        credito=saldo*0.3;
    } else if (saldo>=601)
    {
        credito=saldo*0.4;
    } else
    {
        printf ("Valor invalido\n");
        exit(0);
    }
    printf("O saldo medio do cliente foi: %d e o credito concedido a ele eh: %.2f\n",saldo,credito);
    return 0;
}
