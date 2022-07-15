#include <stdio.h>
#include <stdlib.h>

float massa,grama;
int main()
{
    printf("Digite a massa da pessoa em quilogramas\n");
    scanf("%f",&massa);
    grama=massa*1000;
    printf("A massa em gramas eh: %.2f\n",grama);
    return 0;
}
