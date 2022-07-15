#include <stdio.h>
#include <stdlib.h>

float money,moremoney,taxmoney;
int main()
{
    printf("Digite o salario inicial\n");
    scanf("%f",&money);
    moremoney=money*1.15;
    taxmoney=moremoney*0.92;
    printf("Salario Inicial: %.2f\nSalario com aumento: %.2f\nSalario apos impposto: %.2f\n",money,moremoney,taxmoney);
    return 0;
}
