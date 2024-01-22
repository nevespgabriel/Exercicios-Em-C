#include<stdio.h>
#include<stdlib.h>

/*Faça um algoritmo que leia a idade de uma pessoa e verifique se ela é:
- Criança: Idade de 1 a 13 anos;
- Adolescente: Idade maior que 13 anos e menor ou igual a 20 anos;
- Adulto: Idade maior que 20 e menor ou igual a 50 anos;
- Idosa: idade maior que 50 anos.
Exiba em qual grupo a pessoa se enquadra.*/

int main()
{
    int IDADE;
    printf("Qual a sua idade?\n");
    scanf("%d",&IDADE);
    if(IDADE<0 & IDADE>150)
    {
        printf("Valor invalido!\n");
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
