#include<stdio.h>
#include<stdlib.h>
#define M 3
#define N 4

int main()
{
    int C, L;
    float MAT[M][N],ESP=0;
    for(L=0;L<M;L++)
    {
        for(C=0;C<N;C++)
        {
            printf("Digite o valor contido na linha %d coluna %d:\n",L,C);
            scanf("%f",&MAT[L][C]);
            if (MAT[L][C]==0)
            {
                ESP+=1;
            }
        }
    }
    ESP = ESP/(M*N);
    printf("O grau de esparsidade da matriz eh de %.4f\n",ESP);
    system("pause");
    return 0;
}
