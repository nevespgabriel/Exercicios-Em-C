#include<stdio.h>
#include<stdlib.h>

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
