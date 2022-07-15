#include <stdio.h>
#include <stdlib.h>

float n1,n2,media;
int main()
{
    printf("Digite as duas notas\n");
    scanf("%f %f",&n1,&n2);
    media=(n1*2+n2*3)/5;
    printf("A media ponderada eh: %.2f\n",media);
    return 0;
}
