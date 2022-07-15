#include <stdio.h>
#include <stdlib.h>

int i;
float numero, soma=0;
int main()
{
    for(i=1; i<=10; i++)
    {
        printf("Digite um numero\n");
        scanf("%f",&numero);
        soma=soma+numero;
    }
    printf("A soma dos numeros digitados eh: %.2f",soma);
    return 0;
}
