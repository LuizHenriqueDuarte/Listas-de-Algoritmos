#include <stdio.h>
#include <stdlib.h>

float minimo, salario, proporcao;
int main()
{
    printf("Digite o atual salario minimo\n");
    scanf("%f",&minimo);
    printf("Digite o salario do funcionario\n");
    scanf("%f",&salario);
    proporcao=salario/minimo;
    printf("O funcionario ganha %.2f vezes o salario minimo\n",proporcao);
    return 0;
}
