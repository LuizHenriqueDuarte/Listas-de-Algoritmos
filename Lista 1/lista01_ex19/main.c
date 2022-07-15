#include <stdio.h>
#include <stdlib.h>

int frango;
float money;
int main()
{
    printf("Digite a quantidade de frangos\n");
    scanf("%d",&frango);
    money=frango*(2*3.5 + 4);
    printf("O gasto total eh: %.2f Reais\n",money);
    return 0;
}
