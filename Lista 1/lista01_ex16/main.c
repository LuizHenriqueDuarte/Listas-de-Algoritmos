#include <stdio.h>
#include <stdlib.h>

int sanduba;
float queijo, presunto, burguer;
int main()
{
    printf("Quantos sanduiches a fazer?\n");
    scanf("%d",&sanduba);
    queijo=sanduba*2*0.05;
    presunto=sanduba*0.05;
    burguer=sanduba*0.1;
    printf("Voce devera comprar:\n%.2f Kg de queijo\n%.2f Kg de presunto\n%.2f Kg de carne\n",queijo,presunto,burguer);
    return 0;
}
