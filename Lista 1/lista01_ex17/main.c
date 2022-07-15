#include <stdio.h>
#include <stdlib.h>

float C,F;
int main()
{
    printf("Digite a temperatura em Celsius\n");
    scanf("%f",&C);
    F=(C*9/5)+32;
    printf("A temperatura em fahrenheit eh: %.1f\n",F);
    return 0;
}
