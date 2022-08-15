#include <stdio.h>
#include <stdlib.h>

double potencia(double A, int B);
void todas();
double a;
int b;

int main()
{
    printf("Digite, respectivamente, a base e o expoente\n");
    scanf("%lf %d",&a,&b);
    printf("O valor da potencia eh: %.2lf\n",potencia(a,b));
    printf("Pressione qualquer tecla para mostrar todas as potencias\n\n");
    getch();
    todas();
    return 0;
}

double potencia(double A, int B)
{
    double aux=A;
    A=1;
    for(int i=0;i<B;i++)
    {
        A=A*aux;
    }
    return A;
}

void todas()
{
    for (int i=0;i<11;i++)
    {
        for (int j=0;j<11;j++)
        {
            double aux=i;
            printf("%.2lf elevado a %d: %.2lf\n",aux,j,potencia(aux,j));
        }
    }
}
