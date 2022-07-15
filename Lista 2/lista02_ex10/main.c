#include <stdio.h>
#include <stdlib.h>

int n1,n2;
int main()
{
    printf("Digite dois numeros inteiros\n");
    scanf("%d %d",&n1,&n2);
    if (n1>n2)
    {
        printf("%d\n",n1-n2);
    } else if (n1<n2)
    {
        printf("%d\n",n2-n1);
    } else
    {
        printf("%d\n",0);
    }
    return 0;
}
