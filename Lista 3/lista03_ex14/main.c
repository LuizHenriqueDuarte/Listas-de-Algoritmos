#include <stdio.h>
#include <stdlib.h>
//Como curar a depressão:

char resposta[3];
int main()
{
    do
    {
        fflush(stdin);
        printf("Ola tudo bem?\n");
        gets(resposta);
        if (strcmp(resposta,"Sim")==0)
            printf("Que bom\n");
            else if (strcmp(resposta,"Nao")==0)
                printf("Nao e isso que eu quero ouvir, vamos tentar de novo\n");
            else
                printf("Resposta invalida, responda novamente\n");
    } while(strcmp(resposta,"Sim")!=0);
    return 0;
}
