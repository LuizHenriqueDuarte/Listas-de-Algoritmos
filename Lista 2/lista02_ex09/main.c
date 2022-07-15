#include <stdio.h>
#include <stdlib.h>

//Menor que 60: reprovado, 60 a 69: recuperação, 70 para cima: aprovado
int id;
float n1,n2,n3,media;
int main()
{
    printf("Digite o numero de identificacao do aluno\n");
    scanf("%d",&id);
    printf("Digite as tres notas do aluno\n");
    scanf("%f %f %f",&n1,&n2,&n3);
    media=(n1+n2+n3)/3;
    if (media>=70)
    {
        printf("%d: Aprovado\n",id);
    } else if (media>=60)
    {
        printf("%d: Recuperacao\n",id);
    } else
    {
        printf("%d: Reprovado\n",id);
    }
    return 0;
}
