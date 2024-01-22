#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int X,Y,Z;
    printf("Digite o valor de X:\n");
    scanf("%d",&X);
    printf("Digite o valor de Y:\n");
    scanf("%d",&Y);
    printf("Digite o valor de Z:\n");
    scanf("%d",&Z);
    if (X<=Y & X<=Z)
    {
        printf("O menor valor digitado e %d\n",X);
    }
    else if (Y<=X & Y<=Z)
    {
        printf("O menor valor digitado e %d\n",Y);
    }
    else
    {
        printf("O menor valor digitado e %d\n",Z);
    }
    system("pause");
    return 0;
}
