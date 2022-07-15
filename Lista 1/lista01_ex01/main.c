#include <stdio.h>
#include <stdlib.h>

float comp, larg, area;
int main()
{
    printf("Digite o comprimento do terreno em metros\n");
    scanf("%f",&comp);
    printf("Digite a largura do terreno em metros\n");
    scanf("%f",&larg);
    area=comp*larg;
    printf("A area do terreno eh: %.2f\n",area);
    return 0;
}
