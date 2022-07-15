#include <stdio.h>
#include <stdlib.h>

float R,area;
int main()
{
    printf("Digite o raio da pizza em metros\n");
    scanf("%f",&R);
    area=3.14*pow(R,2);
    printf("A area da pizza eh: %.2f metros quadrados\n",area);
    return 0;
}
