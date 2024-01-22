#include<stdio.h>
#include<stdlib.h>

int main()
{
    char NOME[100], ENDERECO[40], TELEFONE[15];
    int C=0;
    printf("Digite o nome da pessoa:\n");
    gets(NOME);
    do
    {
        C++;
    }while(NOME[C]!='\0');
    NOME[C] = ' ';
    NOME[C+1] = '\0';
    printf("Digite o endereco:\n");
    gets(ENDERECO);
    C = 0;
    do
    {
        C++;
    }while(ENDERECO[C]!='\0');
    ENDERECO[C] = ' ';
    ENDERECO[C+1] = '\0';
    printf("Digite o telefone:\n");
    gets(TELEFONE);
    strcat(NOME,ENDERECO);
    strcat(NOME,TELEFONE);
    printf("%s\n",NOME);
    system("pause");
    return 0;
}
