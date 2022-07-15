#include <stdio.h>
#include <stdlib.h>

float salario,venda,fin;
int main()
{
    printf("Digite o salario fixo do funcionario\n");
    scanf("%f",&salario);
    printf("Digite o o valor total das vendas do funcionario\n");
    scanf("%f",&venda);
    fin=0.04*venda+salario;
    printf("O salario final do funcionario sera: %.2f\n",fin);
    return 0;
}
