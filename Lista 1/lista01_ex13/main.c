#include <stdio.h>
#include <stdlib.h>

int number,centena,dezena,unidade;
int main()
{
    printf("Digite um numero de ate 3 digitos\n");
    scanf("%d",&number);
    centena=number/100;
    dezena=(number%100)/10;
    unidade=(number%100)%10;
    printf("CENTENA: %d\nDEZENA: %d\nUNIDADE: %d\n",centena,dezena,unidade);
    return 0;
}
