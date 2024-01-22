#include<stdio.h>
#include<stdlib.h>

int main()
{
    int X, N, C, PAR, IMP, FAT, CFAT;
    float S;
    FAT = 1;
    PAR = 2;
    IMP = 3;
    printf("Digite o valor de X para a expressao: ");
    scanf("%d",&X);
    printf("Digite o numero de termos (N) que quer ver: ");
    scanf("%d",&N);
    for (C = 1; C<=N; C++)
    {
        if (C == 1)
        {
            S+=X;
        }
        else
        {
            for (CFAT = FAT; CFAT > 0; CFAT--)
            {
                FAT*=CFAT;
            }
            if (C%2 == 0)
            {
                S-=X*PAR/FAT;
            }
            else
            {
                S+=X*PAR/FAT;
            }
            PAR+=2;
            IMP+=2;
        }
    }
    printf("O resultado e: %.1f\n",S);
    system("pause");
    return 0;
}
