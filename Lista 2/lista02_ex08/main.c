#include <stdio.h>
#include <stdlib.h>

float preco;
char codigo;
//A: A vista em dinheiro ou cheque
//B: A vista no cartao de credito
//C: Duas vezes s/juros
//D: Duas vezes c/juros
int main()
{
    printf("Digite o codigo do pagamento (A, B, C ou D) e o preco na etiqueta respectivamente\n");
    scanf("%c %f",&codigo,&preco);
    if (codigo=='A')
    {
        preco=preco*0.9;
    } else if (codigo=='B')
    {
        preco=preco*0.85;
    } else if (codigo=='C')
    {
        preco=preco;
    } else if (codigo=='D')
    {
        preco=preco*1.1;
    } else
    {
        printf("Erro, o codigo digitado nao existe\n");
        exit(0);
    }
    printf("O novo preco eh: %.2f\n",preco);
    return 0;
}
