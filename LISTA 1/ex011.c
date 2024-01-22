#include<stdio.h>
#include<stdlib.h>

int main()
{
    float N1, N2, M;
    int P1, P2;
    printf("Digite o valor da primeira nota:\n");
    scanf("%f",&N1);
    printf("Digite o valor da segunda nota:\n");
    scanf("%f",&N2);
    printf("Digite o peso da primeira nota:\n");
    scanf("%d",&P1);
    printf("Digite o peso da segunda nota:\n");
    scanf("%d",&P2);
    M = (N1*P1+N2*P2)/(P1+P2);
    printf("A media foi %.1f.\n", M);
    system("pause");
    return 0;
}
