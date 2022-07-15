#include <stdio.h>
#include <stdlib.h>

float nota1,nota2,nota3,media;
int main()
{
    printf("Insira a primeira nota\n");
    scanf("%f",&nota1);
    printf("Insira a segunda nota\n");
    scanf("%f",&nota2);
    printf("Insira a terceira nota\n");
    scanf("%f",&nota3);
    media=(nota1+(nota2*2)+(nota3*3))/6;
    printf("A media do aluno eh: %f\n",media);
    return 0;
}
