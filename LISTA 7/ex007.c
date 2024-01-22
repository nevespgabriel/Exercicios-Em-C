#include<stdio.h>
#include<stdlib.h>

int main()
{
    int C, N, C1, SOMA;
    for (C=0;C<10;C++)
    {
        SOMA = 0;
        do
        {
            printf("Digite um numero inteiro positivo:\n");
            scanf("%d",&N);
        }while(N<0);
        for (C1=1;C1<=(N/2)+1;C1++)
        {
            if (N%C1==0)
            {
                SOMA+=C1;
            }
        }
        printf("%d\n",SOMA);
        if (SOMA == N)
        {
            printf("O numero %d eh perfeito!\n",N);
        }
        else
        {
            printf("O numero %d nao eh perfeito!\n",N);
        }
    }
    system("pause");
    return 0;
}
