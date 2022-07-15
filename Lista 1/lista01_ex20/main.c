#include <stdio.h>
#include <stdlib.h>
// Introduz a quantidade de camisetas a serem confeccionadas e imprime quantos metros de novelo serão necessários (1 camiseta=5 metros)
int novelo, camiseta;
int main()
{
    printf("Digite a quantidade de camisetas a serem confeccionadas\n");
    scanf("%d",&camiseta);
    novelo=camiseta*5;
    printf("Serao necessarios %d metros de novelo\n",novelo);
    return 0;
}
