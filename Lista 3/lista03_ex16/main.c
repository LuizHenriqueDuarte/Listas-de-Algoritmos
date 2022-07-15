#include <stdio.h>
#include <stdlib.h>

int quantia,i;
float valor,total=0;
int main()
{
    printf("Quantos produtos o cliente comprou?\n");
    scanf("%d",&quantia);
    for (i=1; i<=quantia; i++)
    {
        printf("Digite o valor deste produto\n");
        scanf("%f",&valor);
        total=total+valor;
    }
    printf("O total que o cliente devera pagar eh: %.2f\n",total);
    return 0;
}
