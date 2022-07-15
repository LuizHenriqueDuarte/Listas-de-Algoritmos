#include <stdio.h>
#include <stdlib.h>

float n1,n2,total;
int main()
{
    printf("Digite dois numeros\n");
    scanf("%f %f",&n1,&n2);
    total=n1/n2;
    printf("A divisao destes numeros eh: %.2f\n",total);
    return 0;
}
