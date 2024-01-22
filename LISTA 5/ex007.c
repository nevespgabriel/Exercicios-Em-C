#include<stdio.h>
#include<stdlib.h>

/*Fulano tem 1,50 metro e cresce 2 centímetros por ano, enquanto Ciclano tem 1,10 metro e cresce 
3 centímetros por ano. Construa um programa que calcule e imprima quantos anos serão 
necessários para que Ciclano seja maior que Fulano*/

int main()
{
    int FUL, CICL, ANO;
    FUL = 150;
    CICL = 110;
    ANO = 0;
    do
    {
        CICL+=3;
        FUL+=2;
        ANO++;
    }
    while (FUL>CICL);
    printf("Foram necessarios %d anos para que Ciclano passasse Fulano em tamanho\n",ANO);
    system("pause");
    return 0;
}
