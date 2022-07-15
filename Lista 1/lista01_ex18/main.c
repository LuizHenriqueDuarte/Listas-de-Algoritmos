#include <stdio.h>
#include <stdlib.h>

//Assumindo que o funcionario trabalhe 8 horas regulares por dia, 22 dias por mes.
int extra, regular;
float liquido, bruto;
int main()
{
    printf("Quantas horas extras o funcionario trabalhou este mes?\n");
    scanf("%d",&extra);
    printf("Quantas horas regulares o funcionario trabalhou este mes?\n");
    scanf("%d",&regular);
    bruto=regular*10+extra*15;
    liquido=bruto*0.9;
    printf("Salario bruto:  %.2f Reais\nSalario liquido: %.2f Reais\n",bruto,liquido);

    return 0;
}
