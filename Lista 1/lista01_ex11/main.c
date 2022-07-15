#include <stdio.h>
#include <stdlib.h>

int dias,meses,anos;
int main()
{
    printf("Quantos dias sem acidentes?\n");
    scanf("%d",&dias);
    anos=dias/365;
    meses=(dias-anos*365)/30;
    dias=(dias-anos*365-meses*30);
    printf("Estamos sem acidentes a %d anos %d meses %d dias!\n",anos,meses,dias);
    return 0;
}
