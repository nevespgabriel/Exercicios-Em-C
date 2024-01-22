#include<stdio.h>
#include<stdlib.h>

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
