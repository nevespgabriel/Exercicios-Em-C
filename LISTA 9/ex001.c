#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char NOME[20];
    int C, TAM;
    C=TAM=0;
    printf("Digite um nome: \n");
    gets(NOME);
    do
    {
        TAM++;
    }while(NOME[TAM]!='\0');
    for(C=TAM;C>=0;C--)
    {
        putchar(NOME[C]);
    }
    printf(" eh seu nome ao contrario\n");
    system("pause");
    return 0;
}
