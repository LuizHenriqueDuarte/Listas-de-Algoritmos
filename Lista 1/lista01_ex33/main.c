#include <stdio.h>
#include <stdlib.h>

float basemaior,basemenor,altura,area;
int main()
{
    printf("Digite, respectivamente, o comprimento da base maior, base menor e a altura, em metros, do trapezio\n");
    scanf("%f %f %f",&basemaior,&basemenor,&altura);
    area=(basemaior+basemenor)*altura/2;
    printf("A area do trapezio eh: %.2f\n",area);
    return 0;
}
