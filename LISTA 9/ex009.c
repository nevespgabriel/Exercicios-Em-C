#include<stdio.h>
#include<stdlib.h>

int CALCULA_TAMANHO(char VET[16])
{
    int C=0;
    do
    {
        C++;
    }while(VET[C]!='\0');
    return C;
}

int main()
{
    char STR1[15],STR2[15];
    do
    {
        printf("Digite a primeira string:\n");
        gets(STR1);
        printf("Digite a segunda string:\n");
        gets(STR2);
        if ((CALCULA_TAMANHO(STR1)>=15)||(CALCULA_TAMANHO(STR2)>=15))
        {
            printf("PALAVRA GRANDE, DIGITE OUTRA!\n");
        }
    }while((CALCULA_TAMANHO(STR1)>=15)||(CALCULA_TAMANHO(STR2)>=15));
    if (strcmp(STR1,STR2)==0)
    {
        printf("As duas palavras sao iguais!\n");
    }
    else
    {
        if (CALCULA_TAMANHO(STR1)>CALCULA_TAMANHO(STR2))
        {
            printf("A primeira palavra eh maior que a segunda!\n");
        }
        else if (CALCULA_TAMANHO(STR1)<CALCULA_TAMANHO(STR2))
        {
            printf("A segunda palavra eh maior que a primeira!\n");
        }
        else
        {
            printf("As duas palavras sao do mesmo tamanho!\n");
        }
    }
    system("pause");
    return 0;
}
