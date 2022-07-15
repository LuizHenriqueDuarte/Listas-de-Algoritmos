#include <stdio.h>
#include <stdlib.h>

int idade,i,aux=1000;
char nome[30],novonome[30];
int main()
{
    for (i=1; i<=10; i++)
    {
        fflush(stdin);
        printf("Digite o nome do sujeito\n");
        gets(nome);
        printf("Digite a idade deste sujeito\n");
        scanf("%d",&idade);
        if (idade<aux)
        {
            aux=idade;
            strcpy(novonome,nome);
        }
    }
    printf("O nome do sujeito mais novo eh: %s\n",novonome);
    return 0;
}
