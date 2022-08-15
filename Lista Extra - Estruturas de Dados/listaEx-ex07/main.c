#include <stdio.h>
#include <stdlib.h>
int chute,limite_superior=2147483647,limite_inferior=0;
char resposta[];
int main()
{
    chute=rand();
    printf("%d\n",chute);
    do
    {
        fflush(stdin);
        printf("Este eh seu numero?\n(sim.......menor.......maior)\n");
        gets(resposta);
        if(strcmp(resposta,"sim")==0)
        {
            printf("Eu sou um genio\n");
            break;
        }
        else if(strcmp(resposta,"menor")==0)
        {
            if(chute<limite_superior)
                limite_superior=chute;

            chute=limite_inferior+(rand()%limite_superior);
            printf("%d\n",chute);
        }
        else if(strcmp(resposta,"maior")==0)
        {
            if(chute>limite_inferior)
                limite_inferior=chute;

            chute=limite_inferior+(rand()%limite_superior);
            printf("%d\n",chute);
        }
    }
    while(1);




}
