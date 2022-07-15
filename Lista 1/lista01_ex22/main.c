#include <stdio.h>
#include <stdlib.h>

float um, cinco, dez, vintecinco, cinquenta, real, total;
int main()
{
    printf("Digite, respectivamente, a quantidade de moedas de 1, 5, 10, 25 e 50 centavos e de 1 Real\n");
    scanf("%f %f %f %f %f %f",&um,&cinco,&dez,&vintecinco,&cinquenta,&real);
    total=um*0.01+cinco*0.05+dez*0.1+vintecinco*0.25+cinquenta*0.5+real;
    printf("Pedrinho, voce tem %.2f Reais economizados\n",total);
    return 0;
}
