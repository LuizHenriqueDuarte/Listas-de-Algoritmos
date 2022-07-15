#include <stdio.h>
#include <stdlib.h>

int alunos,i;
float n1,n2,media;
int main()
{
    printf("Quantos alunos tem nesta sala?\n");
    scanf("%d",&alunos);
    for(i=1;i<=alunos;i++)
    {
        printf("Digite as duas notas deste aluno\n");
        scanf("%f %f",&n1,&n2);
        media=(n1+n2)/2;
        if (media>=6)
            printf("Aprovado\n");
            else
            printf("Reprovado\n");
    }
    return 0;
}
