#include<stdio.h>
#include<stdlib.h>

int main()
{
    int SEG;
    printf("Digite a quantidade de segundos: \n");
    scanf("%d",&SEG);
    printf("Isso corresponde a %d horas, %d minutos e %d segundos.\n",SEG/3600,(SEG%3600)%60,SEG%60);
    system("pause");
    return 0;
}
