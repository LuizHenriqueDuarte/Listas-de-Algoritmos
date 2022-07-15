#include <stdio.h>
#include <stdlib.h>

int A,B,result;
int main()
{
    printf("Digite dois valores numericos A e B\n");
    scanf("%d %d",&A,&B);
    if (A==B)
    {
        result=A+B;
        printf("%d\n",result);
    } else
    {
        result=A*B;
        printf("%d\n",result);
    }
    return 0;
}

