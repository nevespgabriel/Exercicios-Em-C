#include<stdio.h>
#include<stdlib.h>

int main()
{
    int IDADE;
    printf("Qual a sua idade?\n");
    scanf("%d",&IDADE);
    if(IDADE<0 & IDADE>150)
    {
        printf("Valor inválido!\n");
    }
    else if(IDADE<=13)
    {
        printf("Voce e uma crianca\n");
    }
    else if(IDADE<=20)
    {
        printf("Voce e um adolescente\n");
    }
    else if(IDADE<=50)
    {
        printf("Voce e um adulto\n");
    }
    else
    {
        printf("Voce e um idoso\n");
    }
    system("pause");
    return 0;
}
