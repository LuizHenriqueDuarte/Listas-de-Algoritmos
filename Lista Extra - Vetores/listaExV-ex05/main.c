#include <stdio.h>
#include <stdlib.h>

int numero, vetor[10], ispar=0;
int main()
{
    for(int i=0; i<10; i++)
    {
        printf("Digite um numero\n");
        scanf("%d",&numero);
        vetor[i]=numero;
        if((numero%2)==0)
            ispar++;
    }
    printf("Pares: %d\n",ispar);
}

