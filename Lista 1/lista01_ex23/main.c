#include <stdio.h>
#include <stdlib.h>

float altura,suasombra,sombrapredio, predio;
int main()
{
    printf("Digite, respectivamente, sua altura, o tamanho de sua sombra e o tamanho da sombra do predio em metros\n");
    scanf("%f %f %f",&altura,&suasombra,&sombrapredio);
    predio=(altura*sombrapredio)/suasombra;
    printf("A altura do predio eh: %.2f metros\n",predio);
    return 0;
}
