#include <stdio.h>
#include <stdlib.h>

int numero,soma=0;
int main()
{
    printf("Digite um numero inteiro para somar, digite um numero negativo para encerrar a aplicacao\n");
    do
    {
        scanf("%d",&numero);
        if (numero<0)
            break;
        soma=soma+numero;
        printf("Digite outro numero\n");
    } while(1);
    printf("A soma dos numeros digitados eh: %d\n",soma);
    return 0;
}
