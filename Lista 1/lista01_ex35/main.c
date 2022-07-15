#include <stdio.h>
#include <stdlib.h>

float ladomenor, ladomaior,area;
int main()
{
    printf("Digite o tamanho do lado menor e o maior (respectivamente) do losango em metros\n");
    scanf("%f %f",&ladomenor,&ladomaior);
    area=(ladomenor*ladomaior)/2;
    printf("A area do quadrado eh: %.2f metros quadrados\n",area);
    return 0;
}
