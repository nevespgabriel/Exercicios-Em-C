#include<stdio.h>
#include<stdlib.h>

int main()
{
    int F[20], C;
    for (C=0;C<20;C++)
    {
        printf("Digite o valor %d do vetor:\n",C);
        scanf("%d",&F[C]);
        F[C] = F[C] * C;
    }
    for (C=0;C<20;C++)
    {
        printf("Valor %d do vetor: %d\n",C, F[C]);
    }
    system("pause");
    return 0;
}
