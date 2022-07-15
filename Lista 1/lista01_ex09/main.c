#include <stdio.h>
#include <stdlib.h>

int p,m,g,valor;
int main()
{
    printf("Digite a quantidade de camisetas P\n");
    scanf("%d",&p);
    printf("Digite a quantidade de camisetas M\n");
    scanf("%d",&m);
    printf("Digite a quantidade de camisetas G\n");
    scanf("%d",&g);
    valor=10*p+12*m+15*g;
    printf("O valor arrecadado eh: %d\n",valor);
    return 0;
}
