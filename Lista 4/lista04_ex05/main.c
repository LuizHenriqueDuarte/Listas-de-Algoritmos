#include <stdio.h>
#include <stdlib.h>

int i,vetor[10],igual=0,soma=0,maiores=0,maior=0;
float media,somaior=0;
int main()
{
    for (i=0;i<10;i++)
    {
        printf("Digite o %d%c valor do vetor\n",i+1,167);
        scanf("%d",&vetor[i]);
        if (vetor[i]==15)
            igual++;
        else if (vetor[i]<15)
            soma=soma+vetor[i];
        else if (vetor[i]>15)
        {
            maior++;
            somaior=somaior+vetor[i];
        }
    }
    media=somaior/maior;
    printf("Soma dos alementos menores que 15: %d\nNumero de elementos iguais a 15: %d\nMedia dos elementos maiores que 15: %.2f\n",soma,igual,media);
    return 0;
}
