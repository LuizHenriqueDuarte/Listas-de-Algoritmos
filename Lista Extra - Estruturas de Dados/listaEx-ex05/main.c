#include <stdio.h>
#include <stdlib.h>
int digito,aux,k=0,tam;
char morse[]="-----";
int digitos[];
int main()
{
    do
    {
        printf("Digite um numero para converter para morse, negativo para encerrar\n");
        scanf("%d",&digito);
        do
        {
            digitos[k]=digito%10;
            digito=digito/10;
            k++;
        }
        while(digito>0);
        for(int j=k; j>=1; j--)
        {
            digito=digitos[j-1];
            for(int i=0; i<5; i++)
            {
                if(digito==0)
                {
                    morse[i]='-';
                }
                else if(digito<=5)
                {
                    if(i<digito)
                    {
                        morse[i]='.';
                    }
                    else
                    {
                        morse[i]='-';
                    }
                }
                else if(digito<10)
                {
                    if((i+5)<digito)
                    {
                        morse[i]='-';
                    }
                    else
                    {
                        morse[i]='.';
                    }
                }
            }
            for(int i=0; i<5; i++)
            {
                printf("%c",morse[i]);
            }
        }
        k=0;
        printf("\n");
    }
    while(digito>=0);

}
