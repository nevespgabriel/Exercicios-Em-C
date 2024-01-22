#include<stdio.h>
#include<stdlib.h>

/*Elaborar um programa que calcule e apresente o volume de uma caixa retangular, por meio da fórmula: 
VOLUME = COMPRIMENTO * LARGURA * ALTURA*/

int main()
{
    float COMPR, LARG, ALT, VOL;
    printf("Digite o comprimento da caixa em metros:\n");
    scanf("%f",&COMPR);
    printf("Digite a largura da caixa em metros:\n");
    scanf("%f",&LARG);
    printf("Digite a altura da caixa em metros:\n");
    scanf("%f",&ALT);
    VOL = COMPR*ALT*LARG;
    printf("O volume da caixa e %.1f metros cubicos.", VOL);
    system("pause");
    return 0;
}
