#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int N;
    printf("Digite um numero inteiro:\n");
    scanf("%d",&N);
    if (N%2==0)
    {
        printf("O numero e par\n");
    }
    else
    {
        printf("O numero e impar\n");
    }
    if (N>=0)
    {
        printf("O numero e positivo\n");
    }
    else
    {
        printf("O numero e negativo\n");
    }
    system("pause");
    return 0;
}
