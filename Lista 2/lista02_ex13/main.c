#include <stdio.h>
#include <stdlib.h>

int real,sobra,notas100,notas50,notas10,notas5,notas1;
int main()
{
    printf("Digite o valor\n");
    scanf("%d",&real);
    notas100=real/100;
    sobra=real%100;
    notas50=sobra/50;
    sobra=sobra%50;
    notas10=sobra/10;
    sobra=sobra%10;
    notas5=sobra/5;
    sobra=sobra%5;
    notas1=sobra;
    printf("O valor %d pode ser decomposto em notas de %d de 100, %d de 50, %d de 10, %d de 5 e %d de 1 Real\n",real,notas100,notas50,notas10,notas5,notas1);
    return 0;
}
