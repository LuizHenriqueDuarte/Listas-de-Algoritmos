#include <stdio.h>
#include <stdlib.h>

float novaconta1, novaconta2,resto;
int main()
{
    novaconta1=200*1.02;
    novaconta2=120*1.02;
    resto=1200-(novaconta1+novaconta2);
    printf("Restara: %.2f Reais do salario\n",resto);
    return 0;
}
