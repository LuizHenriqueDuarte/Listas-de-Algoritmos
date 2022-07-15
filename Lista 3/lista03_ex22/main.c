#include <stdio.h>
#include <stdlib.h>

int quilometro,total=4000;
int main()
{
    do
    {
        printf("Quantos quilometros voce percorreu desde a ultima cidade?\n");
        scanf("%d",&quilometro);
        total=total-quilometro;
    } while(total>=0);

    printf("Parabens, voce chegou no seu destino");

    return 0;
}
