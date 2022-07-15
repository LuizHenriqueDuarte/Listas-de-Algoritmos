#include <stdio.h>
#include <stdlib.h>

int A,B;
int main()
{
    printf("Digite dois valores numericos A e B\n");
    scanf("%d %d",&A,&B);
    if (A>B)
    {
        printf("O maior numero eh: %d\n",A);
    } else if (A<B)
    {
        printf("O maior numero eh: %d\n",B);
    } else
    {
        printf("Ambos os valores sao iguais\n");
    }
    return 0;
}
