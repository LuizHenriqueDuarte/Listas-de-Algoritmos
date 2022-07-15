#include <stdio.h>
#include <stdlib.h>

float co,ca,hipo;
int main()
{
    printf("Digite, respectivamente, o cateto oposto e o cateto adjacente do triangulo\n");
    scanf("%f %f",&co,&ca);
    hipo=sqrt(pow(co,2)+pow(ca,2));
    printf("A hipotenusa do triangulo eh: %.2f",hipo);
    return 0;
}
