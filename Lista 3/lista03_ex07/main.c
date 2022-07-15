#include <stdio.h>
#include <stdlib.h>

//Assumindo que maior de idade é 18 anos de idade ou mais
int i,maiores=0;
int idade;
int main()
{
    for(i=1; i<=20; i++)
    {
        printf("Digite a idade do sujeito\n");
        scanf("%d",&idade);
        if (idade>=18)
            maiores++;
    }
    printf("Sao %d pessoas maiores de idade\n",maiores);
    return 0;
}
