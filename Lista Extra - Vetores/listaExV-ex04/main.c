#include <stdio.h>
#include <stdlib.h>

int n1, n2, numero, soma, vetor[8];
int main()
{
    for(int i=0; i<8; i++)
    {
        printf("Digite um numero\n");
        scanf("%d",&numero);
        vetor[i]=numero;
    }
    printf("Agora digite duas posicoes (0 a 7)\n");
    scanf("%d %d",&n1,&n2);
    if((n1>=0 && n1<=7) && (n2>=0 && n2<=7))
        soma=vetor[n1]+vetor[n2];
    else
        printf("Erro, nao existe a posicao digitada\n");

    printf("%d\n",soma);
}
