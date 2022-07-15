#include <stdio.h>
#include <stdlib.h>

int i=0, cancer=25, saudavel=25,opcao;
int main()
{
    printf("Digite se o cliente quer ficar na area fumante (1) ou nao fumante (2)\n");
    printf("-----------------------------1: fumante------------------------------\n");
    printf("-----------------------------2: regular------------------------------\n");
    do
    {
        i++;
        printf("Cliente %d:\n",i);
        scanf("%d",&opcao);
        if (opcao==1)
        {
            if (cancer>0)
            {
                cancer--;
                printf("Mesa na area dos fumantes reservada\nRestam %d mesas\n\n",cancer);
            } else
            {
                printf ("Mesas na area dos fumantes estao lotadas\n\n");
                i--;
            }
        } else if (opcao==2)
        {
            if (saudavel>0)
            {
                saudavel--;
                printf("Mesa na area nao fumante reservada\nRestam %d mesas\n\n",saudavel);
            } else
            {
                printf("Mesas na area nao fumante estao lotadas\n\n");
                i--;
            }
        } else
        {
            printf("Opcao incorreta, digite novamente\n\n");
            i--;
        }
    } while ((cancer!=0)||(saudavel!=0));

    return 0;
    }
