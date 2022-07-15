#include <stdio.h>
#include <stdlib.h>

float litro, total, volume;
int main()
{
    printf("Digite o valor do litro da gasolina\n");
    scanf("%f",&litro);
    printf("Digite o valor total da gasolina\n");
    scanf("%f",&total);
    volume=total/litro;
    printf("Voce abasteceu %.2f litros de gasolina\n",volume);
    return 0;
}
