#include <stdio.h>
#include <stdlib.h>

float lado,area;
int main()
{
    printf("Digite o tamanho do lado do quadrado em metros\n");
    scanf("%f",&lado);
    area=lado*lado;
    printf("A area do quadrado eh: %.2f metros quadrados\n",area);
    return 0;
}
