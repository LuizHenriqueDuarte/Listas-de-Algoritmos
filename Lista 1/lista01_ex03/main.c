#include <stdio.h>
#include <stdlib.h>

float pao, broa, taxa;
int main()
{
    printf("Digite a quantidade de paes vendidos\n");
    scanf("%f",&pao);
    printf("Digite a quantidade de broas vendidas\n");
    scanf("%f",&broa);
    taxa= (0.12*pao + 1.5*broa)*0.1;
    printf("Voce devera guardar %.2f\n",taxa);
    return 0;
}
