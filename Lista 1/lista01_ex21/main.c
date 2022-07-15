#include <stdio.h>
#include <stdlib.h>

float total;
int lata, garrafinha, garrafona;
int main()
{
    printf("Quantas latas e/ou garrafas de Meia-Cola o cliente comprou?\n350ml:\n");
    scanf("%d",&lata);
    printf("600ml:\n");
    scanf("%d",&garrafinha);
    printf("2L:\n");
    scanf("%d",&garrafona);
    total=lata*0.35+garrafinha*0.6+garrafona*2;
    printf("O cliente comprou %.2f Litros de Meia-Cola\n",total);
    return 0;
}
