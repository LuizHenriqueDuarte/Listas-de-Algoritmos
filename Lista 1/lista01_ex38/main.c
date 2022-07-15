#include <stdio.h>
#include <stdlib.h>

int nascimento,atual,anos,meses,dias,semanas;
int main()
{
    printf("Digite seu ano de nascimento e o ano atual, respectivamente\n");
    scanf("%d %d",&nascimento,&atual);
    anos=atual-nascimento;
    meses=anos*12;
    dias=meses*30;
    semanas=dias/7;
    printf("Esta pessoa esta viva a: %d anos, %d meses, %d dias e %d semanas\n",anos,meses,dias,semanas);
    return 0;
}
