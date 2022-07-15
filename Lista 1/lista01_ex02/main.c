#include <stdio.h>
#include <stdlib.h>

int equino, ferradura;
int main()
{
    printf("Digite a quantidade de cavalos comprados\n");
    scanf("%d",&equino);
    ferradura=equino*4;
    printf("Serao necessarias %d ferraduras\n",ferradura);
    return 0;
}
