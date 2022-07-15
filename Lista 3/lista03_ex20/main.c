#include <stdio.h>
#include <stdlib.h>

int bichanos,i=0,neko=0,inu=0;
char pets[5];
int main()
{
    printf("Quantos animais existem nesta loja?\n");
    scanf("%d",&bichanos);
    do
    {
        printf("Eh um (gato) ou um (dog)?\n");
        scanf("%s",pets);
        i++;
        if (strcmp(pets,"gato")==0)
            neko++;
        else if (strcmp(pets,"dog")==0)
            inu++;
        else
            printf("Digite apenas uma das duas opcoes (gato) ou (dog)\n");
    } while (i<bichanos);

    printf("Existem %d Gatos e %d Cachorros\n",neko,inu);
    return 0;
}
