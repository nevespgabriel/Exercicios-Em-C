#include<stdio.h>
#include<stdlib.h>

char TABULEIRO[3][3];

void VERIFICA_TABULEIRO(int L, int C, char SIMBA)
{
    if (TABULEIRO[L][C]=='-')
    {
        TABULEIRO[L][C] = SIMBA;
    }
    else
    {
        printf("ESPACO JA OCUPADO!! DIGITE OUTRO\n");
        JOGADA(SIMBA);
    }
}

int VERIFICA_VENCEDOR(char SIMBOLO_JOGADOR)
{
    int L,C,CONT,CONT1;
    CONT1=0;
    for(L=0;L<3;L++)
    {
        CONT = 0;
        for(C=0;C<3;C++)
        {
            if (TABULEIRO[L][C] == SIMBOLO_JOGADOR)
            {
                CONT++;
            }
            if((L==C)&&(TABULEIRO[L][C]==SIMBOLO_JOGADOR))
            {
                CONT1++;
            }
        }
        if ((CONT==3)||(CONT1==3))
        {
            printf("%c ganhou\n",SIMBOLO_JOGADOR);
            return 1;
        }
    }
    return 0;
}

void INICIALIZA_TABULEIRO()
{
    int L, C;
    for (L=0;L<3;L++)
    {
        for (C=0;C<3;C++)
        {
            TABULEIRO[L][C] = '-';
        }
    }
}

void IMPRIMIR_TABULEIRO()
{
    int L, C;
    for (L=0;L<3;L++)
    {
        for (C=0;C<3;C++)
        {
            printf("%c\t",TABULEIRO[L][C]);
        }
        printf("\n");
    }
}

void JOGADA(char SIMBA) //X ou O
{
    int L, C;
    do
    {
        printf("Digite a posicao da linha:\n");
        scanf("%d",&L);
        if ((L<0)||(L>2))
            printf("POSICAO INVALIDA!! DIGITE OUTRA\n");
    }while((L<0)||(L>2));
    do
    {
        printf("Digite a posicao da coluna:\n");
        scanf("%d",&C);
        if ((C<0)||(C>2))
            printf("POSICAO INVALIDA!! DIGITE OUTRA\n");
    }while((C<0)||(C>2));
    VERIFICA_TABULEIRO(L,C,SIMBA);
}

int main()
{
    int CONT;
    INICIALIZA_TABULEIRO();
    IMPRIMIR_TABULEIRO();
    for (CONT = 1;CONT<=9;CONT++)
    {
        if (CONT%2==0) //O
        {
            printf("JOGADOR O\n");
            JOGADA('O');
            IMPRIMIR_TABULEIRO();
            if (VERIFICA_VENCEDOR('O') == 1)
            {
                break;
            }
        }
        else //X
        {
            printf("JOGADOR X\n");
            JOGADA('X');
            IMPRIMIR_TABULEIRO();
            if (VERIFICA_VENCEDOR('X') == 1)
            {
                break;
            }
        }
    }
    system("pause");
    return 0;
}
