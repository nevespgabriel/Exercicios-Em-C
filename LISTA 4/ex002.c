#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void REAJUSTE(float PORC, float PRECO)
{
    PRECO += PRECO*PORC;
    printf("O preco do produto, apos o reajuste de %.1f por cento: %.2f reais\n",PORC*100, PRECO);
}

int main()
{
    float PRECO;
    char CAT;
    printf("Digite o preco do produto:\n");
    scanf("%f",&PRECO);
    printf("Digite a categoria do produto (A, B, C ou outras [O]):\n");
    fflush(stdin);
    scanf("%c",&CAT);
    switch(CAT)
    {
        case 'A':
        case 'a':
            REAJUSTE(0.5,PRECO);
            break;
        case 'B':
        case 'b':
            REAJUSTE(0.25,PRECO);
            break;
        case 'C':
        case 'c':
            REAJUSTE(0.15,PRECO);
            break;
        case 'O':
        case 'o':
            REAJUSTE(0.05,PRECO);
            break;
        default:
            printf("Opcao invalida\n");

    }
    system("pause");
    return 0;
}
