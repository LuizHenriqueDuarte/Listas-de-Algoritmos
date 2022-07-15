#include <stdio.h>
#include <stdlib.h>

float x,y,z;
int main()
{
    printf("Digite tres valores\n");
    scanf("%f %f %f",&x,&y,&z);
    if ((x<(y+z)&&y<(x+z))&&(z<(y+x)))
    {
        if (x==y && x==z)
        {
            printf("Triangulo Equilatero\n");
        } else if ((x==y || x==z)||(y==z))
        {
            printf("Triangulo Isosceles\n");
        } else
        {
            printf("Triangulo Escaleno\n");
        }
    } else
    {
        printf("Nao eh triangulo\n");
    }
    return 0;
}
