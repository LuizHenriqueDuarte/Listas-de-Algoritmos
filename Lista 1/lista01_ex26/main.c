#include <stdio.h>
#include <stdlib.h>

int n1,n2,n3,total;
int main()
{
    printf("Digite tres numeros\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    total=n1*n2*n3;
    printf("A multiplicacao destes numeros eh: %d\n",total);
    return 0;
}
