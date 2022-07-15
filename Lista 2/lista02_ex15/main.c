#include <stdio.h>
#include <stdlib.h>

int cargo;
float oldsalario, newsalario;
int main()
{
    printf("Digite o codigo do cargo e o salario do funcionario respectivamente\n");
    scanf("%d %f",&cargo,&oldsalario);
    if (cargo==101)
    {
        newsalario=oldsalario*1.1;
    } else if (cargo==102)
    {
        newsalario=oldsalario*1.2;
    } else if (cargo==103)
    {
        newsalario=oldsalario*1.3;
    } else
    {
        newsalario=oldsalario*1.4;
    }
    printf("O antigo salario eh: %.2f Reais, o novo salario eh: %.2f Reais, e a diferenca eh: %.2f Reais\n",oldsalario,newsalario,newsalario-oldsalario);
    return 0;
}
