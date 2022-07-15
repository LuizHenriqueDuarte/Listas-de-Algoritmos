#include <stdio.h>
#include <stdlib.h>

int i;
float idade, media=0;
int main()
{
    for(i=1; i<=20; i++)
    {
        printf("Digite a idade do sujeito\n");
        scanf("%f",&idade);
        media=media+idade;
    }
    printf("A media das idades eh: %.2f\n",media/20);
    return 0;
}
