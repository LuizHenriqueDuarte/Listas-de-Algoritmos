#include <stdio.h>
/* Este programa l� uma sequ�ncia de tamanho indefinido de
n�meros do teclado e calcula a m�dia aritm�tica dos mesmos. A
leitura � interrompida quando se digita um n�mero negativo. O
numero negativo n�o deve entrar no c�lculo*/
float media, total;
int main(void)
{
    double acumulado,media,lido;
    int contador;
    acumulado = 0;
    contador = 0;
    do
    {
        scanf("%lf",&lido);
        if(lido>=0)
        {
            contador++;
            total = (total + lido)/contador;
        }
    } while (lido >= 0);
    media = total;
    printf("%f",media);
    return 0;
}
