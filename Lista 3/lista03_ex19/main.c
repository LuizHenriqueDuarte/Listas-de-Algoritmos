#include <stdio.h>
#include <stdlib.h>

int altura,i,alemao=0,anao=1000;
int main()
{
    for (i=1; i<=15; i++)
    {
        printf("Digite a altura do sujeito em centimetros\n");
        scanf("%d",&altura);
        if (altura<anao)
            anao=altura;
        if (altura>alemao)
            alemao=altura;
    }
    printf("Menor idade: %d   Maior idade: %d\n",anao,alemao);
    return 0;
}
