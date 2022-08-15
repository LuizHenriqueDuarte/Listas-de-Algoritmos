#include <stdio.h>
#include <stdlib.h>

int numbah,i=0;
int main()
{
    printf("Digite um numero\n");
    scanf("%d",&numbah);
    do{
        numbah=numbah/10;
        i++;
    } while(numbah>1);
    printf("%d\n",i);
    return 0;
}
