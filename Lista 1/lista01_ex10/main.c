#include <stdio.h>
#include <stdlib.h>

float x1,x2,y1,y2,diffx,diffy,distancia;
int main()
{
    printf("Digite as coordenadas do primeiro ponto\n");
    scanf("%f %f",&x1,&y1);
    printf("Digite as coordenadas do segundo ponto\n");
    scanf("%f %f",&x2,&y2);
    diffx=abs(x1-x2);
    diffy=abs(y1-y2);
    distancia=sqrt(pow(diffy,2) + pow(diffx,2));
    printf("A distancia entre os dois pontos eh: %.2f\n",distancia);

    return 0;
}
