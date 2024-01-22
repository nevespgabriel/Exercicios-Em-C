#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N, C;
    printf("Digite o numero que quer saber a tabuada: ");
    scanf("%d",&N);
    for (C = 0; C<=10; C++)
    {
        printf("%d x %d = %d\n",N,C,N*C);
    }
    system("pause");
    return 0;
}
