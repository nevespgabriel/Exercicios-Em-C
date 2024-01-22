#include<stdio.h>
#include<stdlib.h>

void CONTA_NUM (int VET[10], int N)
{
    int C, VEZES=0;
    for (C=0;C<10;C++)
    {
        if (N == VET[C])
        {
            VEZES++;
        }
    }
    printf("%d aparece %d vezes no vetor\n",N,VEZES);
}

int main()
{
    int VET[10] = {8, 2, 6, 9, 4, 5, 2, 5, 1, 8}, N;
    printf("Digite um numero para verificar quantas vezes aparece no vetor:\n");
    scanf("%d",&N);
    CONTA_NUM(VET,N);
    system("pause");
    return 0;
}
