#include <stdio.h>
#include <stdlib.h>

float raio,altura,volume;
int main()
{
    printf("Digite, respectivamente, o raio e a altura da caixa de agua\n");
    scanf("%f %f",&raio,&altura);
    volume=3.14*pow(raio,2)*altura;
    printf("O volume eh: %f metros cubicos\n",volume);
    return 0;
}
