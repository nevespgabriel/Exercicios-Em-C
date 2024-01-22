#include<stdio.h>
#include<stdlib.h>

void CONTA_NUM (int VET[10], int X)
{
    int C, QUANT;
    QUANT = 0;
    printf("A(s) posicao(oes) do numero no vetor: ");
    for (C=0;C<10;C++)
    {
        if (VET[C] == X)
        {
            printf("%d ",C);
        }
    }
}

int main()
{
    int VET[10]={3, 6, 7, 13, 634, 31, 5, 7, 8, 3}, X;
    printf ("Digite o valor que gostaria de verificar quantas vezes aparece no vetor:\n");
    scanf("%d",&X);
    CONTA_NUM(VET,X);
    system("pause");
    return 0;
}
