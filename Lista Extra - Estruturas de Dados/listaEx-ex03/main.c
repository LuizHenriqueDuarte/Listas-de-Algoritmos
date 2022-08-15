#include <stdio.h>
#include <stdlib.h>

int n,m;
int main()
{
    printf("Digite dois numeros\n");
    scanf("%d %d",&n,&m);
    for(int i=0;i<=200;i++)
    {
        if((i%n==0)&&(i%m!=0))
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
