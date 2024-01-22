#include<stdio.h>
#include<stdlib.h>

void PRINT_PAR (int PAR, int C, int P[15])
{
    printf("Valores pares: ");
    for (C=0;C<PAR;C++)
    {
        printf("%d ",P[C]);
    }
}

void PRINT_IMPAR(int IMPAR, int C, int I[15])
{
    printf("\nValores impares: ");
    for (C=0;C<IMPAR;C++)
    {
        printf("%d ",I[C]);
    }
}

void SELECT_NUM ()
{
    int N[15], C, PAR=0, IMPAR=0, P[15], I[15];
    for (C=0;C<15;C++)
    {
        do
        {
            printf("Digite o valor %d do vetor:\n",C);
            scanf("%d",&N[C]);
            if (N[C] < 0)
            {
                printf("Favor digitar apenas valores positivos!\n");
            }
            else if (N[C] % 2 == 0)
            {
                P[PAR] = N[C];
                PAR++;
            }
            else
            {
                I[IMPAR] = N[C];
                IMPAR++;
            }
        }while(N[C]<0);
    }
    PRINT_PAR(PAR, C, P);
    PRINT_IMPAR(IMPAR,C,I);
}

int main()
{
    SELECT_NUM();
    system("pause");
    return 0;
}
