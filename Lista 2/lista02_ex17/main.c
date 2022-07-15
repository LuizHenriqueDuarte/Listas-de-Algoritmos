#include <stdio.h>
#include <stdlib.h>

char codigo[10];
int number;
float valor;
int main()
{
    printf("Digite o codigo do item.\n - Cachorro quente: dog\n - Bauru: bauru\n - Misto quente: misto\n - Hamburger: hburguer\n - Cheeseburguer: xburguer\n - Refrigerante: refri\n");
    fflush(stdin);
    scanf("%s",codigo);
    printf("Digite o numero de itens comprados\n");
    scanf("%d",&number);
    if (strcmp(codigo,"dog")==0)
    {
        valor=number*11;
    } else if (strcmp(codigo,"bauru")==0)
    {
        valor=number*8.5;
    } else if (strcmp(codigo,"misto")==0)
    {
        valor=number*8;
    } else if (strcmp(codigo,"hburguer")==0)
    {
        valor=number*9;
    } else if (strcmp(codigo,"xburguer")==0)
    {
        valor=number*10;
    } else if (strcmp(codigo,"refri")==0)
    {
        valor=number*4.5;
    } else
    {
        printf("Codigo invalido\n");
        exit(0);
    }
    printf("O valor total a ser pago eh: %.2f Reais\n",valor);
    return 0;
}
