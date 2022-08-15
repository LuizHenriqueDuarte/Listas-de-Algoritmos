#include <stdio.h>
#include <stdlib.h>

float raiz(float n);
float valor;

int main()
{
    printf("Digite o valor para obter sua raiz quadrada\n");
    scanf("%f",&valor);
    printf("raiz quadrada de %.2f: %f\n",valor,raiz(valor));
    return 0;
}

float raiz(float n)
{
    float sqrt=n/2,aux=0;

    while(sqrt!=aux)
    {
        aux=sqrt;
        sqrt=(n/aux+aux)/2;
    }
    return sqrt;
}
