#include <stdio.h>
#include <stdlib.h>

float peso,gordo,vareta;
int main()
{
    printf("Qual o peso da pessoa? (Em newtons)\n");
    scanf("%f",&peso);
    gordo=peso*1.15;
    vareta=peso*0.8;
    printf("Se a pessoa engordar, pesara: %.2f N\nSe a pessoa emagrecer, pesara: %.2f N\n",gordo,peso);
    return 0;
}
