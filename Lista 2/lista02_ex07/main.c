#include <stdio.h>
#include <stdlib.h>

char sexo;
float altura,ideal;
int main()
{
    printf("Digite sua altura em centimetros e seu sexo (H ou M) respectivamente\n");
    scanf("%f %c",&altura,&sexo);
    altura=altura/100;
    if (sexo=='H')
    {
        ideal=(72.7*altura)-58;
    } else if (sexo=='M')
    {
        ideal=(62.1*altura)-44.7;
    } else
    {
        printf("Opcao invalida");
        exit(0);
    }
    printf("O peso ideal eh: %.2f\n",ideal);
    return 0;
}
