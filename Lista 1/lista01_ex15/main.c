#include <stdio.h>
#include <stdlib.h>

float Carlos, Andre, Felipe, conta, diff;
int inteiro;
int main()
{
    printf("Digite a conta\n");
    scanf("%f",&conta);
    Felipe=conta/3;
    Andre=(int)Felipe;
    Carlos=(int)Felipe;
    diff=Felipe-(int)Felipe;
    Felipe=Felipe+(2*diff);
    printf("Carlos: %.2f\nAndre: %.2f\nFelipe: %.2f\n",Carlos, Andre, Felipe);
    return 0;
}
