#include<stdio.h>
#include<stdlib.h>

int main()
{
    int VET[15], C, MAIOR, POS_MAIOR;
    for (C=0;C<15;C++)
    {
        printf("Digite o valor %d:\n",C);
        scanf("%d",&VET[C]);
        if (C == 0)
        {
            MAIOR = VET[C];
            POS_MAIOR = C;
        }
        else if (VET[C]>MAIOR)
        {
            MAIOR = VET[C];
            POS_MAIOR = C;
        }
    }
    printf("O maior valor digitado foi %d, na posicao %d\n",MAIOR,POS_MAIOR);
    system("pause");
    return 0;
}
