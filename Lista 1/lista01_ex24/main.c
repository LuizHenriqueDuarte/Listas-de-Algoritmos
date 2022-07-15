#include <stdio.h>
#include <stdlib.h>

float refresco,agua,suco;
int main()
{
    printf("Informe a quantidade de refresco que voce deseja fazer (em litros)\n");
    scanf("%f",&refresco);
    agua=refresco*0.8;
    suco=refresco-agua;
    printf("Sao necessarios %.2f Litros de agua e %.2f Litros de suco para fazer o refresco\n",agua,suco);
    return 0;
}
