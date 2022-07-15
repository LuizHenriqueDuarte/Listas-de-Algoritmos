#include <stdio.h>
#include <stdlib.h>

int dia,mes,dias;
int main()
{
    printf("Insira o mes\n");
    scanf("%d",&mes);
    printf("Insira o dia\n");
    scanf("%d",&dia);
    dias=((mes-1)*30)+dia;
    printf("Se passaram %d dias\n",dias);
    return 0;
}
