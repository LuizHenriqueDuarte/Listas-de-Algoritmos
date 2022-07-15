#include <stdio.h>
#include <stdlib.h>

int canal,pessoas,npessoas=0,ncasas=0,n3=0,n5=0,n8=0,n11=0,n13=0,aux;
int main()
{
    printf("Canais:\n----3-----\n----5-----\n----8-----\n----11----\n----13----\n\n");
    printf("Quantas casas participarao da pesquisa?\n");
    scanf("%d",&ncasas);
    aux=ncasas;
    do
    {
        ncasas--;
        printf("Casa %d, digite o canal que a familia assiste\n",aux-ncasas);
        scanf("%d",&canal);
        printf("Quantas pessoas desta familia estao assistindo este canal?\n");
        scanf("%d",&pessoas);
        npessoas=npessoas+pessoas;
        switch (canal)
        {
        case 3:
            n3=n3+pessoas;
            break;
        case 5:
            n5=n5+pessoas;
            break;
        case 8:
            n8=n8+pessoas;
            break;
        case 11:
            n11=n11+pessoas;
            break;
        case 13:
            n13=n13+pessoas;
            break;
        default:
            printf("Canal invalido, digite novamente\n");
            ncasas++;
            npessoas=npessoas-pessoas;
        }
    } while (ncasas>=1);

    printf("----Canal----Audiencia----Porcentagem da Audiencia\n");
    printf("------3---------%d-----------------%.2f---------------\n",n3,(float)(100*n3/npessoas));
    printf("------5---------%d-----------------%.2f---------------\n",n5,(float)(100*n5/npessoas));
    printf("------8---------%d-----------------%.2f---------------\n",n8,(float)(100*n8/npessoas));
    printf("------11--------%d-----------------%.2f---------------\n",n11,(float)(100*n11/npessoas));
    printf("------13--------%d-----------------%.2f---------------\n",n13,(float)(100*n13/npessoas));

    return 0;
}
