#include<stdio.h>
#include<stdlib.h>

int main()
{
    char STR1[15], STR2[15];
    int C=0, CPR=0;
    printf("Digite a primeira palavra:\n");
    gets(STR1);
    printf("Digite a segunda palavra:\n");
    gets(STR2);
    do
    {
        if(STR1[C]==STR2[C])
        {
            CPR++;
        }
        C++;
    }while((STR1[C]!='\0')||(STR2[C]!='\0'));
    if (CPR == C)
    {
        printf("As duas palavras sao iguais!\n");
    }
    else
    {
        printf("As duas palavras sao diferentes!\n");
    }
    system("pause");
    return 0;
}
