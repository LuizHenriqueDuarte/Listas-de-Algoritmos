#include <stdio.h>
#include <stdlib.h>

int nivel, horas;
float salario;
int main()
{
    printf("Digite respectivamente o nivel do professor e a quantidade de horas/aulas que ele exerce numa semana\n");
    scanf("%d %d",&nivel,&horas);
    if (nivel==1)
    {
        salario=horas*12*4.5;
    } else if (nivel==2)
    {
        salario=horas*17*4.5;
    } else if (nivel==3)
    {
        salario=horas*25*4.5;
    } else
    {
        printf("Nivel digitado invalido\n");
        exit(0);
    }
    printf("O salario do professor eh: %.2f Reais\n",salario);
    return 0;
}
